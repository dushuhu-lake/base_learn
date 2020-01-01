//
// Created by liujinfu on 19-6-16.
//

#ifndef BASE_LEARN_POINTANDREFERENCE_H
#define BASE_LEARN_POINTANDREFERENCE_H


#include <iostream>
using namespace std;
void point_test(int * x){
    *x = *x + 1;
}


void reference_test(int &x ){
    x += 1;
}

void point_reference_test(){
    int x = 9;
    point_test(&x);
    cout<<" after call with point x =: "<<x<<endl;
    reference_test(x);
    cout<<" after call with ref x =: "<<x<<endl;
}

#endif //BASE_LEARN_POINTANDREFERENCE_H
