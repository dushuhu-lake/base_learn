//
// Created by liujinfu on 19-6-16.
//

#ifndef BASE_LEARN_BIGINTMUL_H
#define BASE_LEARN_BIGINTMUL_H


#include <iostream>

int bigint_mult(int a, int b){
    int c = 0;
    int temp = 0;
    int e = 0;
    while (b != 0){
        temp = b % 10;
        b = b / 10;
        c = a * temp * 10^e;
        e ++;
    }
    return c;
}

void bigint_mult_test(){
    int c = bigint_mult(12, 11);
    std::cout<<" c =： "<<c <<std::endl;
}

#endif //BASE_LEARN_BIGINTMUL_H
