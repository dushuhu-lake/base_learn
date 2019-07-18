//
// Created by 89674 on 2019/6/30.
//

#ifndef BASE_LEARN_AUTOPTR_H
#define BASE_LEARN_AUTOPTR_H

#include <iostream>
#include <memory>

using  namespace std;
class Test{
public:
    Test(int size){
        p = new int[size];
        for (int i = 0; i < size; ++i) {
            p[i] = i;
        }
    }
    void pprint(int i){
        cout<<i<<": "<<p[i]<<endl;
    }
    int *p;
    ~Test(){
        cout<<"delete"<<endl;
        delete p;
    }
};
Test * ttest(){
    Test *p = new Test(10);
    p->pprint(2);
//    delete p;
//    p = nullptr;
    return p;
}

auto_ptr<Test> atest(){
    auto_ptr<Test> aap(new Test(20));
    cout<<"iiii"<<endl;
    aap->pprint(4);
    return aap;
}

void aatest(){
    auto_ptr<Test> aap(new Test(20));
    cout<<"iiii"<<endl;
    aap->pprint(4);
};

void autoptr_test(){
    Test *rp =ttest();
    rp->pprint(3);
    cout<<"======"<<endl;

    auto_ptr<Test> aa1p = atest();
    aa1p->pprint(5);

    aatest();
    cout<<"last..."<<endl;
}

//    2: 2
//    3: 3
//    ======
//    iiii
//    4: 4
//    5: 5
//    delete


#endif //BASE_LEARN_AUTOPTR_H
