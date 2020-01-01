//
// Created by liujinfu on 19-6-19.
//

#ifndef BASE_LEARN_STRING_H
#define BASE_LEARN_STRING_H

#include <cstddef>
#include <iostream>


//namespace my_string{
    using namespace std;
    class mystring {
    public:
        // 通用构造函数
        explicit mystring(const char* str = nullptr);
        // 拷贝构造函数
        mystring(const mystring &str);
        // 析构函数
        ~mystring();

        // 重载 +
        mystring operator+(const mystring &str)const;

        mystring& operator=(const mystring &str);
        mystring& operator+=(const mystring &str);
        bool operator==(const mystring &str) const;
        char& operator[](int n)const;

        int size() const;
        const char* c_str()const;

        friend istream& operator>>(istream &is, mystring &str);
        friend ostream& operator<<(ostream &os, mystring &str);

    private:
        char* data;
        int length;

    };
    /**
     * 类的成员函数中，有一些是加了const修饰的，表示这个函数不会对类的成员进行任何修改。
     * 一些函数的输入参数也加了const修饰，表示该函数不会对改变这个参数的值。
     *
     * 友元函数的作用是为了 共享数据，提高效率。 友元函数破坏类的封装，
     * 友元函数 可访问类的所有成员。
     */

//} // namespace


#endif //BASE_LEARN_STRING_H
