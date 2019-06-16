#include <iostream>
#include "baseCpp/floatInmem.h"
#include "baseCpp/pointAndreference.h"
#include "baseCpp/bigIntMul.h"
#include "myArray/myArraytest.h"

void myArraytest(){
    myArray<int> arr;
    arr.reSize<int>(12);
}
int main() {
//    floatInMem();
//    point_reference_test();
//    bigint_mult_test();
    myArraytest();
    return 0;
}