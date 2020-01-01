//
// Created by 89674 on 2019/7/28.
//

#ifndef BASE_LEARN_FINDMAX_H
#define BASE_LEARN_FINDMAX_H

#include <iostream>

#define  MAX_VALUE 0x7ffffff
void find_max_value_test(){
    int a[5] ={1,3, 6, 4, 10};
    int b[4] = {2, 1, 5,8};
    int size_a = 5;
    int size_b = 4;

    int index = -1;
    // 找到出错下标
    for (int i = 0; i < size_a-1; ++i) {
        if(a[i]>a[i+1]) {
            index = i+1;
            break;
        }
    }


    int pre;
    int next;

    int res = a[index];
    // 情况1
    if(index == 0){
        res = -MAX_VALUE;
        next = a[index+1];
        for (int j = 0; j < size_b; ++j) {
            if(b[j]<next && b[j]>res) res = b[j];
        }
    }
    if(res == -MAX_VALUE){
        std::cout<<"NO"<<std::endl;
        return;
    }

    // 情况2
    if(index == size_a-1){
        res = a[index-1];
        pre = res;
        for (int j = 0; j < size_b; ++j) {
            if(b[j]>pre && b[j]>res) res = b[j];
        }
    }
    if(res == a[index-1]){
        std::cout<<"NO"<<std::endl;
        return;
    }

    pre = a[index-1];
    next = a[index+1];
    res = a[index-1];
    for (int j = 0; j < size_b; ++j) {
        if(b[j]>pre && b[j]<next && b[j]>res) res = b[j];
    }

    a[index] = res;
    for (int k = 0; k < size_a; ++k) {
        std::cout<<a[k]<<" "<<std::endl;
    }
}
#endif //BASE_LEARN_FINDMAX_H
