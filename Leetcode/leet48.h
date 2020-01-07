//
// Created by 89674 on 2020/1/6.
//

#ifndef BASE_LEARN_LEET48_H
#define BASE_LEARN_LEET48_H

#include <vector>
#include <iostream>
using namespace std;

void move(vector<vector<int>>& matrix, int k, int n);

void rotate(vector<vector<int>>& matrix) {
    int size = matrix.size(); // 正方形的n
    if (size == 1)
        return;
    else{
        for (int i = 0; i < size / 2; ++i) {
            // 需要循环的层数
            move(matrix,i,size);
        }
    }
}

void move(vector<vector<int>>& matrix, int k, int n) {
    // 当前要循环的起始位置(i,j) = (k,k)
    for (int l = k; l < n - k - 1; ++l) {
        // 需要移动的次数为 当前层一行的个数减1，最后一个即第一个的目的位置
        int firstI = k;
        int firstJ = l;

        int i = firstI, j = firstJ;
        int pre = matrix[i][j];
        do{
            // 计算当前位置要置换到的位置
            int nextI = j;
            int nextJ = n-1-i;
            // 先保存目标位置数
            int temp = matrix[nextI][nextJ];
            // 替换
            matrix[nextI][nextJ] = pre;
            // 更新i，j 即temp原来所在的位置，下一个循环将为temp找到其目的位置
            i = nextI;
            j = nextJ;
            pre = temp;
        }while (i!=firstI || j!=firstJ);// 当交换到最初开始位置时即可停止循环。
    }
}

void leet48test(){
    vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    rotate(matrix);
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix.size(); ++j) {
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
#endif //BASE_LEARN_LEET48_H

/***

 [[2,29,20,26,16,28],
 [12,27,9,25,13,21],
 [32,33,32,2,28,14],
 [13,14,32,27,22,26],
 [33,1,20,7,21,7],
 [4,24,1,6,32,34]]

[[4,33,13,32,12,2],
 [24,1,7,33,27,29],
 [1,20,32,2,14,20],
 [6,28,32,27,25,26],
 [32,21,22,9,13,16],
 [34,7,26,14,21,28]]

 [[4,33,13,32,12,2],
 [24,1,14,33,27,29],
 [1,20,32,32,9,20],
 [6,7,27,2,25,26],
 [32,21,22,28,13,16],
 [34,7,26,14,21,28]]

 **/