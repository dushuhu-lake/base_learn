//
// Created by liujinfu on 19-6-19.
//

#include <cstring>
#include "mystring.h"

//using namespace my_string;
//namespace my_string {
/**
 * namespace 要括起来
 * string 类 使用char* data 来存储字符串，
 * char* 的结束标志为'\0', 该标志占一个字符，不记录string的length中
 */
    mystring::mystring(const char *str) {
        /**
         * 默认构造函数的实现，在定义的时候不用 *str=nullptr
         * 因为在声明的时候已经声明过了
         */
        if (str == nullptr) {
            length = 0;
            data = new char[1];
            data[0] = '\0';
        } else {
            length = strlen(str); // strlen 返回的长度不包括'\0'
            data = new char[length + 1];
            strcpy(data, str); //深拷贝， 最后的'\0' 也会被拷贝进去
        }
    }

    mystring::mystring(const mystring &str) {
        length = str.size();
        data = new char[length + 1];
    }

    mystring::~mystring() {
        delete[] data;
        length = 0;
    }

    mystring mystring::operator+(const mystring &str) const {
        mystring newmystring;
        newmystring.length = length + str.length;
        newmystring.data = new char[newmystring.length + 1];
        strcpy(newmystring.data, data);
        strcat(newmystring.data, str.data);
        return newmystring;
    }

    mystring &mystring::operator=(const mystring &str) {
        if (this == &str) {
            return *this;
            /**
             * this 是调用该函数的对象的指针 *this 是这个对象
             * mystring &str 是一个对象的引用，即是一个对象
             * 再对str 取地址 &str 即表示一个对象的指针
             */
        }

        delete[] data;
        length = str.length;
        data = new char[length + 1];
        strcpy(data, str.data);
        return *this;
    }

    mystring &mystring::operator+=(const mystring &str) {
        length = length + str.length;
        char *newdata = new char[length + 1];
        strcpy(newdata, data);
        strcat(newdata, str.data);
        delete[] data;
        data = newdata;
        return *this;
    }

    bool mystring::operator==(const mystring &str) const {
        /**
         * 比较是否相等，是指比较两个字符串是否相等，即 长度和每个字符都要相等
         * strcmp(char*s1, char*s2)：
         * 若s1、s2字符串相等，则返回零；若s1大于s2，则返回大于零的数；否则，则返回小于零的数。
         */
        if (length != str.length) return false;
        return strcmp(str.data, data) ? false : true;
    }

    char& mystring::operator[](int n) const {
        if (n < 0 || n >= length) return data[length - 1]; // 小于0 或超出长度则返回‘\0’
        else return data[n];
    }

    int mystring::size() const {
        return length;
    }

    /**
     * 友元函数不是类的成员函数，所有不能用mystring::来定义。
     * 下面的用法是从控制台获取输入 istream 到mystring中。
     */
    istream& operator>>(std::istream &is, mystring &str) {
        char tem[1000];  //简单的申请一块内存
        is >> tem;
        str.length = strlen(tem);
        str.data = new char[str.length + 1];
        strcpy(str.data, tem);
        return is;
    }
    ostream& operator<<(std::ostream &os, mystring &str) {
        os<<str.data;
        return os;
    }

    inline const char* mystring::c_str() const {
        return data;
    }

//}
