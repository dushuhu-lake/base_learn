//
// Created by 89674 on 2019/7/10.
//

#ifndef BASE_LEARN_SUBSTRSS_H
#define BASE_LEARN_SUBSTRSS_H

#include <string>
#include <iostream>
/**
 * 子字符串模式匹配，使用计算子字符串之和的方式
 */
using  namespace std;
bool subStrrss(string &sstr, string &pstr){
    int sLen = sstr.length();
    int pLen = pstr.length();
    int pSum = 0;
    int sSum = 0;
    for (int i = 0; i < pLen; ++i) {
        pSum += pstr[i];
        sSum += sstr[i];
    }
    std::cout<<" pSum :"<<pSum<<endl;
    for (int j = 0; j < sLen - pLen; ++j) {
        if(pSum == sSum){
            bool flag = false;
            for (int i = 0; i < pLen; ++i) {
                if(sstr[j+i] == pstr[i]){
                    if(i == pLen-1) flag = true;
                } else break;
            }
            if(flag) return true;
        } else{
            sSum -= sstr[j];
            sSum += sstr[j+pLen];
        }
    }
    return false;
}

void subStrsstest(){
    string sstr = "liniliujinfu";
    string pstr = "liu";
    bool  bb = subStrrss(sstr, pstr);
    cout<<"  : "<<bb<<endl;
}
#endif //BASE_LEARN_SUBSTRSS_H
