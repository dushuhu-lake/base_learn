#include <iostream>

using namespace std;
int add_1(int a, int b){
    return a+b;
}

int add_2(int &a, int &b){
    return a+b;
}

void add_3(int* a, int*b, int* c){
    *c = *a + *b;
}

void funAddtest(){
    int a = 1;
    int b = 2;
    cout<<add_1(a,b)<<endl;
    cout<<add_2(a, b)<<endl;
    int c=0;
    add_3(&a, &b, &c);
    cout<<c<<endl;
}