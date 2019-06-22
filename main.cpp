#include <iostream>
//#include "baseCpp/floatInmem.h"
//#include "baseCpp/pointAndreference.h"
//#include "myArray/myArraytest.h"
//#include "algorithmCode/jpegZ.h"
//#include "algorithmCode/bigIntMul.h"
//#include "baseCpp/avoid_dump_delete.h"
//#include "mystring/mystringtest.h"
//#include "baseCpp/myalloc.h"
//#include "baseCpp/placementNew.h"
//#include "baseCpp/operatorNew.h"
#include <string>
#include <vector>
#include <algorithm>
#include "baseCpp/unnameObject.h"
using namespace std;
template<class T>
void test(T a){
    cout<<a<<endl;

}

int main() {
    int a = 10;
    test<int>(a);
    return 0;

}