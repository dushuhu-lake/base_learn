//
// Created by liujinfu on 19-6-16.
//

#include <iostream>
#include "templateTest.h"
/**
 * 这样定义模板类的函数是不行的，编译不通过
 * @tparam T
 */
template <class T>
void templateTest<T> ::say() {
    std::cout<<"hello"<<std::endl;
}