//
// Created by liujinfu on 19-6-20.
//

#ifndef BASE_LEARN_OPERATORNEW_H
#define BASE_LEARN_OPERATORNEW_H

#include <iostream>
#include <string>
using namespace std;

class airplanerep  // 表示一个飞机对象
{
public:
    airplanerep(int id,const string & s,const string & d)
    {
        ID = id;
        start = s;
        dest = d;
    }

    ~airplanerep()
    {
        cout<<"airplanerep destructor!"<<endl;
    }

    int getID() const
    {
        return ID;
    }

private:
    int ID;
    string start;
    string dest;
};

// 注意airplane和airplanerep含有一样的成员函数，它们的接口完全相同
// 类airplane实际上是个句炳类(Handle class)
class airplane // 修改后的类 — 支持自定义的内存管理
{
public:
    airplane(int id,const string & s,const string & d)
    {
        rep = new airplanerep(id,s,d);
    }

    ~airplane()
    {
        delete rep;
    }

    int getID() const
    {
        return rep->getID();
    }

    static void * operator new(size_t size);
    static void operator delete(void *deadobject,size_t size);

private:
    union
    {
        airplanerep *rep;  // 用于被使用的对象
        airplane *next;    // 用于没被使用的（在自由链表中）对象
    };

    // 类的常量，指定一个大的内存块中放多少个
    // airplane对象，在后面初始化
    static const int block_size;
    static airplane *headoffreelist;
};

airplane *airplane::headoffreelist; //内存池链表头
const int airplane::block_size = 512; //内存池块的个数

void * airplane::operator new(size_t size)
{
    // 把“错误”大小的请求转给::operator new()处理;
    if(size != sizeof(airplane))
        return ::operator new(size);

    airplane *p = headoffreelist; // p指向自由链表的表头

    // p 若合法，则将表头移动到它的下一个元素
    if(p)
        headoffreelist = p->next;
    else
    {
        // 自由链表为空，则分配一个大的内存块，
        // 可以容纳block_size个airplane对象
        airplane *newblock = static_cast<airplane*>(::operator new(block_size * sizeof(airplane)));

        // 将每个小内存块链接起来形成一个新的自由链表
        // 跳过第0个元素，因为它要被返回给operator new的调用者
        for (int i = 1; i < block_size-1; ++i)
            newblock[i].next = &newblock[i+1];

        // 用空指针结束链表
        newblock[block_size-1].next = 0;

        // p 设为表的头部，headoffreelist指向的
        // 内存块紧跟其后
        p = newblock;
        headoffreelist = &newblock[1];
    }

    return p;
}

// 传给operator delete的是一个内存块, 如果
// 其大小正确，就加到自由内存块链表的最前面
void airplane::operator delete(void *deadobject,size_t size)
{
    if(deadobject == 0) return;
    if(size != sizeof(airplane))
    {
        ::operator delete(deadobject);
        return;
    }

    //将要释放的空间插入空闲区链表前端
    airplane *carcass = static_cast<airplane*>(deadobject);
    carcass->next = headoffreelist;
    headoffreelist = carcass;
}

void operatorNewTest()
{
    airplane *pa = new airplane(101,"shanghai","beijing"); // 第一次分配: 得到大块内存，生成自由链表，等
    cout<<pa->getID()<<endl;
    delete pa;

    airplane *pb = new airplane(102,"shanghai","beijing");
    cout<<pb->getID()<<endl;
    delete pb;
}

#endif //BASE_LEARN_OPERATORNEW_H
