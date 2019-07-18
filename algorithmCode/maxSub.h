//
// Created by 89674 on 2019/7/9.
//

#ifndef BASE_LEARN_MAXSUB_H
#define BASE_LEARN_MAXSUB_H

#include <iostream>

/**
    请设计一个复杂度为O(n)的算法，计算一个未排序数组中排序后相邻元素的最大差值。
    给定一个整数数组A和数组的大小n，请返回最大差值。保证数组元素个数大于等于2小于等于500。
    测试样例：
    [9,3,1,10],4
    返回：6
 */


void findMaxMin(int *num, int size, int &min, int &max){
    for (int i = 1; i < size; ++i) {
        min = min<num[i] ? min : num[i];
        max = max>num[i] ? max : num[i];
    }
}

void maxSub(int *num, int size){
    // 桶排序， 大范围的数，桶的个数需要max-min个，
    // 为了缩小桶的个数，将每个数按照比例，缩小到 待排序的数组的长度。
    int min = num[0];
    int max = min;
    findMaxMin(num, size, min, max);
    int aar[size+1];
    for (int i = 0; i < size + 1; ++i) {
        aar[i] = 0;
    }
    aar[0] = min;
    aar[size] = max;
    for (int j = 0; j < size; ++j) {
        // 缩放
        int index = (num[j]-min)*(size) / (max-min);
        if(num[j]>aar[index]){
            aar[index] = num[j];
        }
    }
    int res = 0;
    // aar 的size是n+1， 所以aar里必定有一个是空，或者多个为空，找空的两头的数之差 就是所求
    for (int k = 0; k < size+1; ++k) {
        if(aar[k] == 0){
            int kk = k+1;
            while(kk<size+1){
                if(aar[kk] == 0) {
                    kk++;
                } else break;
            }
            res = (aar[kk] - aar[k-1]) < res ? res : (aar[kk] - aar[k-1]);
            k = kk;
        }
    }
    std::cout<<"无序数组的最大相邻值为： "<<res<<std::endl;
}

void maxSubTest(){
    int num[] = {9,3,1,2,4,10};
    int size = sizeof(num)/ sizeof(int);
    maxSub(num, size);
}
#endif //BASE_LEARN_MAXSUB_H
