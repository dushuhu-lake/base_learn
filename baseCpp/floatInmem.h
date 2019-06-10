//
// Created by liujinfu on 19-6-10.
//

#ifndef BASE_LEARN_FLOATINMEM_H
#define BASE_LEARN_FLOATINMEM_H

#include <iostream>
void floatInMem(){
    /** 125.5 的存储形式 31(符号位) + 30-23(阶码,偏移基数127) + 22-0(尾数)
     *  0(符号位) 10000101(接码6+127=133) 11110110000000000000000(尾数)
     *  00000000   低地址

        00000000

        11111011

        01000010   高地址
     */
    float a=125.5;
    char *p=(char *)&a;
    printf("%d\n",*p);      // 0
    printf("%d\n",*(p+1));  // 0
    printf("%d\n",*(p+2));  // -5
    printf("%d\n",*(p+3));  // 66
}

#endif //BASE_LEARN_FLOATINMEM_H
