//
// Created by 89674 on 2019/7/18.
//

#ifndef BASE_LEARN_READFILE_H
#define BASE_LEARN_READFILE_H

#include<iostream>
#include<stdio.h>

using namespace std;

/**
 * 测试1 为了测试fread 每次执行后，游标指向读往后的下一个字节
 */
void readFileTest(){
    // 编译后的可执行文件在cmake-build-debug，将txt.txt存放在main同级
    // 使用相对路径 ../txt.txt
    string fname = "../txt.txt";
    FILE* fp = fopen(fname.c_str(),"rb");

    if(!fp){
        cout<<" error"<<endl;
    }

    char* s1 = new char[10];
    char* s2 = new char[5];

    int size1 = fread(s1, sizeof(char),10,fp);// 读完之后fp的游标已经后移10位了
    int size2 = fread(s2, sizeof(char),10,fp);// 游标是上次fread读完之后的位置

    cout<<"  "<<string(s1)<<endl;
    cout<<"  "<<string(s2)<<endl;

    fclose(fp);

}



#endif //BASE_LEARN_READFILE_H
