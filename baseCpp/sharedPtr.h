//
// Created by 89674 on 2019/7/1.
//

#ifndef BASE_LEARN_SHAREDPTR_H
#define BASE_LEARN_SHAREDPTR_H

#include <memory>
#include <iostream>

using namespace std;
void sharedPtrtest(){
    std::shared_ptr<int> p(new int);
    cout<<p.use_count()<<endl; // 1

    shared_ptr<int> p2 = p;
    cout<<p.use_count()<<endl; // 2

    shared_ptr<double> dp = make_shared<double>(10.5); // 这中方式创建效率更高，相当于调用了构造函数
    cout<<dp.use_count()<<endl;
}

/**
 * 共享一个指针，使用引用计数的方式来管理内存，最后一个对象负责销毁指针指向的对象内存(调用析构函数)
 */


#endif //BASE_LEARN_SHAREDPTR_H
