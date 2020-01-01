//
// Created by liujinfu on 19-6-20.
//

#ifndef BASE_LEARN_PLACEMENTNEW_H
#define BASE_LEARN_PLACEMENTNEW_H

/**
 * 使用placement的方式
 * 参考： https://www.cnblogs.com/luxiaoxun/archive/2012/08/10/2631812.html
 */

#include <iostream>
using namespace std;

class X
{
public:
    X() { cout<<"constructor of X"<<endl; }
    ~X() { cout<<"destructor of X"<<endl;}

    void SetNum(int n)
    {
        num = n;
    }

    int GetNum()
    {
        return num;
    }

private:
    int num;
};

void placementNewTest()
{
    /**
     * placement new 即先准备好一块内存（用指针表示），
     * 再用placement new 将一个实例化的对象存储在这块内存上
     * 预先分配这块内存的大小为要存储的对象的大小。
     * 这块内存可以重复利用，提高初始化的效率
     * 相对于普通的new ，placementnew 不需要再次去堆栈中找足够大小的内存，这是一个很耗时的事情
     */
    char* buf = new char[sizeof(X)];
    X *px = new(buf) X;
    px->SetNum(10);
    cout<<px->GetNum()<<endl;
    px->~X();  // 通过指针调用该对象的析构函数，即释放该对象，但是这块内存还是在这个指针手里，可以再次被赋值
    delete []buf;// 使用delete[] 即可释放该指针，彻底让系统回收这块内存。
}
#endif //BASE_LEARN_PLACEMENTNEW_H
