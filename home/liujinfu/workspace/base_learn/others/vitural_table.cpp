//
// Created by 89674 on 2019/6/27.
//
#include <iostream>
using namespace std;
class Base
{
public:

    Base(int i) :baseI(i){};

    virtual static void print(void){ cout << "调用了虚函数Base::print()"; }

    virtual void setI(){cout<<"调用了虚函数Base::setI()";}

    virtual ~Base(){}

private:

    int baseI;

};

int main(){
    Base b(1000);
    /**
     * 对象名是对象在内存的首地址
     * 对象在内存的首地址是一个指针类型，指向一个虚函数表，该表存储了该对象的所有虚函数的地址（指针）（按声明顺序）
     */
    int * vptrAdree = (int *)(&b);
    cout << "虚函数表指针（vprt）的地址是：\t"<<vptrAdree << endl;

    /**
     * typedef 是定义了一个函数指针类型，类型名就叫Fun接受一个函数指针， 和Base类中的print函数一致的声明
     */
    typedef void(*Fun)(void);
    /**
     * (int *)*(int*)(&b):
     * &b ： 取对象b在内存的首地址， 为函数表的地址
     * (int*)(&b) ： 将该地址强转成int指针
     * *(int*)(&b) ： 访问该指针指向内容， 为虚函数表里的第一个虚函数的地址
     * (int *)*(int*)(&b)： 将第一个虚函数的地址强转成int指针
     * (Fun)*( (int *)*(int*)(&b))： 再将int型指针强转成真实的函数指针，并赋值给vfunc。
     * vfunc() ： 因为vfunc就是函数指针，也就是函数名，后面加（）， 可以添加参数，就模拟了原来函数的执行；
     * 可以看出，其实vfunc 就是print函数的一个别名
     * 所以 typedef void(*Fun)(void); 就是获取函数的类型，用这个类型可以给相似的函数起别名。
     * 所以函数和数据一样，也是有自己的类型，也可以定义成其他名。
     */
    Fun vfunc = (Fun)*( (int *)*(int*)(&b));
    cout << "第一个虚函数的地址是：" << (int *)*(int*)(&b) << endl;
    cout << "通过地址，调用虚函数Base::print()：";
    vfunc();
}
