//
// Created by liujinfu on 19-6-17.
//

#ifndef BASE_LEARN_JPEGZ_H
#define BASE_LEARN_JPEGZ_H

#include <iostream>
#include <iomanip>
using  namespace std;
/**
 * jpeg z字形读取
 * @param data
 * @param row
 * @param col
 * @return
 */
int * jpegZ(const int* matrix, int row, int col){
    cout<<"输出原始数据形式:"<<endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            std::cout<<std::setw(4)<<*(matrix + i*col + j);
        }
        std::cout<<std::endl;
    }
    int *res = new int[row*col];
    int m = 0, n =0; // m 行 n 列
    for (int x = 0; x < row; ++x) { // x 行
        for (int y = 0; y < col; ++y) { // y列
            res[m * col + n] = matrix[x*col+y];
            if( (m==0 || m==row-1) && n%2 == 0){
                // 如果是第一行或最后一行，且列为偶数，则向右水平
                n++;
                continue;
            }
            if((n==0 || n==col-1) && m%2!=0){
                // 如果是第一列或者最后一列，且行为奇数，则竖直向下
                m++;
                continue;
            }
            if((m+n)%2 != 0){
                // 左下角
                m++; n--;
            } else if((m+n)%2 == 0){
                m--; n++;
            }
        }
    }

    std::cout <<"输出计算后的结果："<< std::endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            std::cout << std::setw(4) << *(res + i * col + j);
        }
        std::cout << std::endl;
    }

    return res;

}

void jpegz_test(){
    int row = 8; // 行数
    int col = 8; // 列数
    int matrix[row][col];
    int d = 1;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            matrix[i][j] = d++;
        }
    }
    jpegZ(matrix[0], row, col);
}

#endif //BASE_LEARN_JPEGZ_H
