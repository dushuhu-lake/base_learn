//
// Created by liujinfu on 19-6-16.
//

#include "myArray.h"


template<class Type>
void myArray<Type>::reSize(int newSize) {
    /**
     * resize 指定是扩容
     */
     if(newSize <= arraySize){
         throw " resize 的长度要比现在的大， 现在的为：%d",arraySize;
     }
}
