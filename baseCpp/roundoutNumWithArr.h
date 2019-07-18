//
// Created by 89674 on 2019/7/15.
//

#ifndef BASE_LEARN_ROUNDOUTNUMWITHARR_H
#define BASE_LEARN_ROUNDOUTNUMWITHARR_H

#include <iostream>
using namespace std;
/**  给定二维数组边为n 循环输出该数组，如下：
 1 2 3 4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9
 */

int getValue(int i, int j, int n){
    // 计算（i,j）属于第几轮， 并计算出那一轮的开始值
    bool leftDown = false;
    int start = 1;
    if(i>=j) {
        leftDown = true;
        int nn = n;
        for (int k = 0; k < j+1; ++k) {
            start =  start + (nn-1)*4;
            nn-=2;
        }

        if(i == j) return start;
        else{
            start = start + (nn-1)*4 - (i-j);
        }
    } else{
        leftDown = false;
        int nn = n;
        for (int k = 0; k < i+1; ++k) {
            start =  start + (nn-1)*4;
            nn-=2;
        }

        if(i == j) return start;
        else{
            start = start + (nn-1)*4 - (i-j);
        }
    }


}

void round_num_test2(){
    int n = 4;
    int value;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            value = getValue(i, j, n);
            std::cout<<value<<" ";
        }
        std::cout<<std::endl;
    }
}
void round_num_test(){
    int n = 4;
    int arr[n][n];

    for(int m = 0; m<n; m++){
        for(int q = 0; q<n; q++){
            arr[m][q] = 0;
        }
    }


    int stop = n;
    int i = 0;
    int j = 0;
    int x = 0;
    int y = n;
    int num= 1;
    while(stop){
        if(stop == 1){
            arr[i][j] = num;
            break;
        }
        // 1.行++
        y--;
        while(j<=y){
            arr[i][j++] = num++;
        }
        // 2.列++
        i++;
        j--;
        while(i<=y){
            arr[i++][j] = num++;
        }
        i--;
        j--;
        // 3.行--
        while(j>=x){
            arr[i][j--] = num++;
        }
        j++;
        i--;
        // 4. 列--
        x++;
        while(i>=x){
            arr[i--][j] = num++;
        }
        i++;
        // 5. 进入下一个循环
        j++;
        stop = stop -2;
    }
    for(int m = 0; m<n; m++){
        for(int q = 0; q<n; q++){
            std::cout<<arr[m][q]<<" ";
        }
        std::cout<<std::endl;
    }
}
#endif //BASE_LEARN_ROUNDOUTNUMWITHARR_H
