//
// Created by liujinfu on 19-6-17.
//

#ifndef BASE_LEARN_ARRAYMETH_H
#define BASE_LEARN_ARRAYMETH_H

/**
 * how to use array
 */


#include <iosfwd>
#include <iostream>

/**
 * 数组名不是指针,它仅仅是个 地址常量
 * 一维数组的数组名 直接付给指针, 如 int a[3]; int *p=a;
 * 二维数组名 直接赋给指针 就错了... 如 int a[3][4]; int *p =a;  就是错误的;  int *p = a[0] 或*a ;
 */
void array_1D(int *data){
    std::cout<<data[2]<<std::endl;
}
/**
 * 二维数组的值传递 一般使用数组名， 同时要传递数组的size
 * 如果想直接传递二维数组的更多信息 使用vector<vector<int>>
 */
void array_2D(int *data){
    std::cout<<data[1]<<std::endl;
}


void array_test(){
    int data1D[2] = {1,2};
    array_1D(data1D);

    int data2D[2][3] = {{1,2,3},{4,5,6}};
    array_2D(data2D[0]);
}


#endif //BASE_LEARN_ARRAYMETH_H
