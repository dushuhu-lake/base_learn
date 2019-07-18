//
// Created by 89674 on 2019/6/27.
//

#include <iostream>

/**
 * 总结：
 * 函数名 是一个指针，存的是函数的起始地址，该指针是一个函数类型，可以（int*） 转换成int类型
 * typedef的用法：
 * 1， typedef int myInt;
 * 2. typedef char (*fun)(int)
 * 第二种就是定义一个函数指针类型， 函数指针类型就和int类型一样的用法。
 * 使用如下： fun f = Fun; f(); 用函数指针类型fun声明了一个对象f（是一个函数指针），赋值Fun，Fun是一个函数名（代表该函数的指针）
 */


using namespace std;
//定义一个函数指针pFUN，它指向一个返回类型为char，有一个整型的参数的函数
typedef char (*pFun)(int);
//定义一个返回类型为char，参数为int的函数
//从指针层面上理解该函数，即函数的函数名实际上是一个指针，
//该指针指向函数在内存中的首地址
char glFun(int a)
{
    cout << a<<endl;
    //return a;
}

int main()
{
//将函数glFun的地址赋值给变量pFun
    pFun pfun = glFun;
//*pFun”显然是取pFun所指向地址的内容，当然也就是取出了函数glFun()的内容，然后给定参数为2。
    (*pfun)(2);

    cout<<typeid(pfun).name()<<endl;
    int a;
    cout<<typeid(a).name()<<endl;
    return 0;
}
