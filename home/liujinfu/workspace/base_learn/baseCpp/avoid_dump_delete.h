//
// Created by liujinfu on 19-6-18.
//

#ifndef BASE_LEARN_AVOID_DUMP_DELETE_H
#define BASE_LEARN_AVOID_DUMP_DELETE_H

/**
 * 避免重复释放内存
 */

#include <cstdlib>

#define safe_delete(p)  \
{                       \
    if((p) != NULL){      \
        delete(p);      \
        (p) = NULL;       \
    }                   \
}                       \


void safe_free(int *p){
    if(p != NULL){
        delete[] p;
        p = NULL;
    }
}
/**
 * 内存错误有四种： 内存泄露、 重复释放、 坏指针问题、 超量写内存
 * 下面测试重复释放， 如果new int[100]或更小，则重复delete没问题，
 * 看来重复释放错误是针对申请的大块内存。
 *
 * 正确的用法是在delete 的时候 随机 赋值为NULL
 */
 class A{
 public:
     int *a;
 };
void safe_delete_test1(){
    int *a = new int[1000];
    a[0] = 1;
    a[1] =2;
    a[100] = 100;
    cout<<a[100];
    cout<<"haha"<<endl;
}
void safe_delete_test(){
    safe_delete_test1();
    A *aa = new A();
    aa->a = new int[1100];
    cout<<"dede"<<endl;
}
#endif //BASE_LEARN_AVOID_DUMP_DELETE_H
/***
《问题》危险的代码：

   int* p=new int(1);
   delete p;
   delete p;

探讨一：

   连续两次对同一个指针delete ，会造成严重的错误。编译器会检测出这样的错误吗？或许一些编译器会的，但别太过指望编译器。

探讨二：

   第一次delete后，p自动为空(NULL)了吗？不是的。

探讨三：

   在delete之前会自动检查p是否为空(NULL)，如果为空(NULL)就不再delete了吗？确实是如此。

探讨四：

   删除为空(NULL)的指针是不会有任何问题的吗？确实是如此。

探讨五：

   #define SAFE_DELETE(p) delete (p); p = 0;

   这样就就万事大吉了吗？好像不是的。

   delete p+1;//在C++中是正确的

   SAFE_DELETE(p+1)将会导致错误

探讨六：

   没有好的方法解决重复释放这样的问题，只能靠程序员的细心了。

《结论》安全的代码：

   int* p=new int(1);
   delete p;
   p = NULL;

（1）delete 一次以后，p成了野指针，它作为地址的值还是有效地没还可以访问它以前指向的内存，不过那片内存被重新格式化了；
（2）p不等于NULL，用 if(p) 语句不能判断它指向的内存是否有效（此时它指向的内存无效，p本身有效）；
（3）delete 一次以后，不能再次delete，否则会报错；
（4）此时如果误用p指针，仍然可以修改内存的值和从该处取出数值，但此时数据不受保护，该内存空间可能被重新被分配给别的变量；
（5）如果p指向的空间再次被new函数分配，即使是分配给别的指针，即使分配大小与原来不一样，p又恢复了效力，可以改变内存的值，甚至可以重新被delete，p的作用与新分配的指针一样；
 ***/