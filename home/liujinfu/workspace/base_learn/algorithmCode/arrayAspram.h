//
// Created by 89674 on 2019/7/31.
//

#ifndef BASE_LEARN_ARRAYASPRAM_H
#define BASE_LEARN_ARRAYASPRAM_H

/**
 * 数组作为参数传递的 方法
 */
#include <iostream>

using  namespace std;
void arrayAspramtest1(int *arr, int size){
    // 如下方法是不对的， 形参接收之后 并不知道size sizeof(arr) = 8 表示arr 是个地址指针为8字节
    cout<<"1 arr size = "<< sizeof(arr)<<endl;
    // 要知道size 必须从参数中传入，或者 用vector 或 array
    cout<<"1 arr size = "<< size<<endl;
}

void arrayAspramtest2(int arr[], int size){
    // 如下方法是不对的， 形参接收之后 并不知道size sizeof(arr) = 8 表示arr 是个地址指针为8字节
    cout<<"2 arr size = "<< sizeof(arr)<<endl;
    // 要知道size 必须从参数中传入，或者 用vector 或 array
    cout<<"2 arr size = "<< size<<endl;
}

void arrayAspramtest3(int arr[3], int size){
    // 如下方法是不对的， 形参接收之后 并不知道size sizeof(arr) = 8 表示arr 是个地址指针为8字节
    cout<<"3 arr size = "<< sizeof(arr)<<endl;
    // 要知道size 必须从参数中传入，或者 用vector 或 array
    cout<<"3 arr size = "<< size<<endl;
}

void arrayAspramtest(){
    int arr[3] = {1,2,3};
    int size = sizeof(arr)/ sizeof(int);
    arrayAspramtest1(arr, size);
    arrayAspramtest2(arr, size);
    arrayAspramtest3(arr, size);



    cout<<"========"<<endl;
    int *ar = new int[3];
    for (int i = 0; i < 3; ++i) {
        ar[i] = i;
    }
    cout<< sizeof(ar)<<endl;
    cout<< sizeof(arr)<<endl;
    cout<<"========"<<endl;
}



#endif //BASE_LEARN_ARRAYASPRAM_H
