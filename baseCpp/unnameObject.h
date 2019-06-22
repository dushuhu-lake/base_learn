//
// Created by liujinfu on 19-6-21.
//

#ifndef BASE_LEARN_UNNAMEOBJECT_H
#define BASE_LEARN_UNNAMEOBJECT_H

template<class T>
class print{
public:
    print(){
        std::cout<<"constructor"<<std::endl;
    }
    void operator() (const T& elem){
        std::cout<<elem<<" ";
    }
};

/**
 * print类只有一个成员函数，即重载了()
 * 在下面的测试中， 作为临时对象（无名对象，unname object）
 * print<int>() 会调用print类的构造函数，生成一个对象，这个对象 没有名字，
 * 这个对象传递给for_each函数， for_each 会调用这个对象的（）操作符重载函数
 * 当for_each结束，这个作为函数栈的对象也被销毁
 *
 * 效果类似于回调函数啊
 */
void uOtest(){
    int a[3] = {1,2,3};
    std::vector<int> va(a, a+3);
    for_each(va.begin(), va.end(), print<int>());
}

/***
template<typename InputIterator, typename Function>
Function for_each(InputIterator beg, InputIterator end, Function f) {
  while(beg != end)
    f(*beg++);
}
能看懂吧！！！
 ***/
#endif //BASE_LEARN_UNNAMEOBJECT_H
