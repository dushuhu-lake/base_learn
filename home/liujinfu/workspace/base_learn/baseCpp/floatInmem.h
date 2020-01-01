//
// Created by liujinfu on 19-6-10.
//

#ifndef BASE_LEARN_FLOATINMEM_H
#define BASE_LEARN_FLOATINMEM_H

#include <iostream>


void floatInMem(){
    /** 验证计算机对浮点数的存储方式  https://www.cnblogs.com/dolphin0520/archive/2011/10/02/2198280.html
     * 125.5 的存储形式 31(符号位) + 30-23(阶码,偏移基数127) + 22-0(尾数)
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

/**
 * 浮点数表达方式， 这种表达方式利用科学计数法来表达实数，即用一个尾数（Mantissa ），一个基数（Base），
 * 一个指数（Exponent）以及一个表示正负的符号来表达实数。比如 123.45 用十进制科学计数法可以表达为 1.2345 × 102 ，
 * 其中 1.2345 为尾数，10 为基数，2 为指数。浮点数利用指数达到了浮动小数点的效果，从而可以灵活地表达更大范围的实数。
 * 提示: 尾数有时也称为有效数字（Significand）。尾数实际上是有效数字的非正式说法。
 *
 * 计算机中是用有限的连续字节保存浮点数的
 * IEEE定义了多种浮点格式，但最常见的是三种类型：单精度、双精度、扩展双精度，分别适用于不同的计算要求。
 * */

#endif //BASE_LEARN_FLOATINMEM_H
