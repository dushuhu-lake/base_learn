//
// Created by liujinfu on 19-6-18.
//

#ifndef BASE_LEARN_BIGINTMUL_H
#define BASE_LEARN_BIGINTMUL_H

#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <sstream>

int * big_int_mul(int *num1, int size1, int *num2, int size2){
    int size = size1 + size2 -1;
    int *res = new int[size]; // c++ 默认初始化为0？
//    memset(res, 0, sizeof(int)*size);
    for (int i = 0; i < size1; ++i) {
        int k = i;
        for (int j = 0; j < size2; ++j) {
            res[k++] += num1[i] * num2[j];
        }
    }

    for (int l = 0; l < size; ++l) {
        if(res[l]>=10){
            res[l+1] += res[l]/10;
            res[l] %= 10;
        }
    }
    std::reverse(res, res + size);// 最后的结果需要翻转
    stringstream ss;
    for (int m = 0; m < size; ++m) {
        ss<<res[m];
    }
    cout<<ss.str().c_str()<<endl;
    return res;
}

void big_int_mul_test(){
    // 计算21*31 = 651
    int num1[2] = {1,2};
    int num2[3] = {1,3};
    big_int_mul(num1,2,num2,2);
}

#endif //BASE_LEARN_BIGINTMUL_H
