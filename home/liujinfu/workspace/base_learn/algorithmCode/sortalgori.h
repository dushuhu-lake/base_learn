//
// Created by 89674 on 2019/7/17.
//

#ifndef BASE_LEARN_SORTALGORI_H
#define BASE_LEARN_SORTALGORI_H

/**
 * 几种常见的排序算法
 */


// 1. 快速排序
void quickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int key = arr[left];  //比较点，这是第一个坑，将left位置的value存入key中，坑就出来了
        int i = left, j = right;
        while (i < j)
        {
            while (arr[j] > key && j > i)	//arr[j] > key可以换为arr[j] >= key，但j > i不可以换为j >= i，边界问题
                j--;
            if (i < j)
                arr[i++] = arr[j];
            while (arr[i] < key && i < j)	//同理
                i++;
            if (i < j)
                arr[j--] = arr[i];
        }
        arr[i] = key;	  //此时不用纠结是arr[i] = key还是arr[j] = key，因为i = j
        quickSort(arr, left, i - 1);
        quickSort(arr, i + 1, right);
    }
}

// 2. 堆排序




#endif //BASE_LEARN_SORTALGORI_H
