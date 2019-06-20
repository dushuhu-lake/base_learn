//
// Created by liujinfu on 19-6-20.
//

#ifndef BASE_LEARN_MYALLOC_H
#define BASE_LEARN_MYALLOC_H


class myalloc {
public:
    myalloc(){cout<<"constructor of X"<<endl;};
    ~myalloc(){cout<<"destructor of X"<<endl;};

    void *operator new(size_t size, string str){
        cout<<"operator new size "<<size<<" with string "<<str<<endl;
        return ::operator new(size);
    }

    void *operator new(size_t size){
        cout<<"operator new size "<<size<<" with string "<<endl;
        return ::operator new(size);
    }

    void operator delete(void* pointee){ //这里是重载delete操作符函数 原函数定义在new.h文件中
        cout<<"operator delete"<<endl;
        ::operator delete(pointee);  // :: 缺省指定， 则代表的是全局 即new.h文件中定义的
    }

private:
    int num;
};


void myalloctest(){
    myalloc *px = new("A new class") myalloc;
    cout<<"--------------"<<endl;
    myalloc *px1 = new myalloc;
    cout<<"--------------"<<endl;
    myalloc *px2 = new myalloc();
    cout<<"--------------"<<endl;

    delete px;
}

#endif //BASE_LEARN_MYALLOC_H
