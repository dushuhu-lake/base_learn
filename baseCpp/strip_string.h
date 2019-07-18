//
// Created by 89674 on 2019/7/14.
//

#ifndef BASE_LEARN_STRIP_STRING_H
#define BASE_LEARN_STRIP_STRING_H

#include <string>
#include <list>
#include <iostream>
#include "../../../../AppData/Local/Packages/CanonicalGroupLimited.UbuntuonWindows_79rhkp1fndgsc/LocalState/rootfs/usr/include/c++/7/sstream"

using namespace std;

bool is_whitespace_ascii(char c) {
    return c == '\n' || c == ' ' || c == '\t' || c == '\r';
}

void strip_string(const std::string &s){
    stringstream ss;

    bool skip = true;
    for (auto iter = s.begin(); iter != s.end(); ++iter) {
        if (skip && is_whitespace_ascii(*iter)) {
            continue;
        }

        skip = false;
        ss << *iter;
    }

    string fs = ss.str();
    skip = true;
    std::list<char> characters;
    for (auto iter = fs.rbegin(); iter != fs.rend(); ++iter) {
        if (skip && is_whitespace_ascii(*iter)) {
            continue;
        }

        skip = false;
        characters.push_back(*iter);
    }

    std::cout<< string(characters.rbegin(), characters.rend())<<std::endl;
}

void strip_string_test(){
    string s = "niha nn";
    strip_string(s);
}

#endif //BASE_LEARN_STRIP_STRING_H
