//
// Created by 89674 on 2019/6/30.
//

#ifndef BASE_LEARN_VIRTUAL_RUN_TIME_H
#define BASE_LEARN_VIRTUAL_RUN_TIME_H

#include <iostream>
using namespace std;
class A{
public:
    inline virtual void fun(){
        cout<<"base fun"<<endl;
    }
    void fcn(){
        cout<<"base fcn"<<endl;
    }
};

class B: public A{
public:
    inline void fun(){
        cout<<"drive fun"<<endl;
    }
    void fcn(){
        cout<<"drive fcn"<<endl;
    }

};

void fun_call(A *p){
    p->fun();
}

void vrt_test(){
    B *p = new B();
    p->fcn();
    A *pa = dynamic_cast<A*>(p);
    pa->fcn();
}
#endif //BASE_LEARN_VIRTUAL_RUN_TIME_H
