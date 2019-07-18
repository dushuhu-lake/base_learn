//
// Created by 89674 on 2019/7/9.
//

#ifndef BASE_LEARN_MAXSUB_H
#define BASE_LEARN_MAXSUB_H

#include <iostream>

/**
    �����һ�����Ӷ�ΪO(n)���㷨������һ��δ�������������������Ԫ�ص�����ֵ��
    ����һ����������A������Ĵ�Сn���뷵������ֵ����֤����Ԫ�ظ������ڵ���2С�ڵ���500��
    ����������
    [9,3,1,10],4
    ���أ�6
 */


void findMaxMin(int *num, int size, int &min, int &max){
    for (int i = 1; i < size; ++i) {
        min = min<num[i] ? min : num[i];
        max = max>num[i] ? max : num[i];
    }
}

void maxSub(int *num, int size){
    // Ͱ���� ��Χ������Ͱ�ĸ�����Ҫmax-min����
    // Ϊ����СͰ�ĸ�������ÿ�������ձ�������С�� �����������ĳ��ȡ�
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
        // ����
        int index = (num[j]-min)*(size) / (max-min);
        if(num[j]>aar[index]){
            aar[index] = num[j];
        }
    }
    int res = 0;
    // aar ��size��n+1�� ����aar��ض���һ���ǿգ����߶��Ϊ�գ��ҿյ���ͷ����֮�� ��������
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
    std::cout<<"����������������ֵΪ�� "<<res<<std::endl;
}

void maxSubTest(){
    int num[] = {9,3,1,2,4,10};
    int size = sizeof(num)/ sizeof(int);
    maxSub(num, size);
}
#endif //BASE_LEARN_MAXSUB_H
