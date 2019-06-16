//
// Created by liujinfu on 19-6-16.
//

#ifndef BASE_LEARN_MYARRAY_H
#define BASE_LEARN_MYARRAY_H

template <class Type>
class myArray {
public:
    /**
     * 类定义中的 static 和const
     * 1. static 是类变量，该类所属，区别于实例化的对象的变量，即他的作用于是类，可以不需要实例化即可访问，且是所有对象共有的
     * 2. const 是常量， 表明该变量不可被修改
     * 3. static 对象需要在类外被定义， const 则可以类内和外定义。
     */
    const static int defaultSize = 100; // const and static
    int arraySize;

private:
    Type *pdata;

public:
    myArray(){ arraySize = defaultSize;}; // 默认空参 构造函数

    myArray(int size){arraySize = size;};

    ~myArray(){delete [] pdata; }; // 数组的释放
    int length () { return  arraySize;};
    void reSize(int newSize);
};


#endif //BASE_LEARN_MYARRAY_H
