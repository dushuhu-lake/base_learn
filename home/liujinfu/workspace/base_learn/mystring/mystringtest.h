//
// Created by liujinfu on 19-6-19.
//

#ifndef BASE_LEARN_MYSTRINGTEST_H
#define BASE_LEARN_MYSTRINGTEST_H

#include "mystring.h"
#include <iostream>
using namespace std;

void mystringtest(){
    mystring s;
    cin >> s;
    cout << s << ": " << s.size() << endl;
    cout<<s[0]<<endl;

    char a[] = "Hello", b[] = "World!";
    mystring s1(a), s2(b);


    mystring s3 = s1 + s2;
    if (s1 == s3)	cout << "First: s1 == s3" << endl;
    s1 += s2;
    if (s1 == s3)	cout << "Second: s1 == s3" << endl;


}

#endif //BASE_LEARN_MYSTRINGTEST_H
