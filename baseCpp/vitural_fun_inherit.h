//
// Created by 89674 on 2019/6/28.
//

#ifndef BASE_LEARN_VITURAL_FUN_INHERIT_H
#define BASE_LEARN_VITURAL_FUN_INHERIT_H

#include <stdio.h>

/**
 * 演示一个含有虚函数的继承对象的内存模型
 */

extern int extI = 10;

class point3d{
public:
    float a;
    float b;
    float c;
public:
    void test3d(){
        cout<<"base test3d"<<endl;
    }
    virtual void printPoint3d();
};
void point3d::printPoint3d(){
    this->a =1;
    this->b =2;
    this->c =3;
    printf("a= %g,b= %g,c = %g\n",this->a,this->b,this->c);
}


class Point4d:public point3d{
private:
    float d;
public:
    void printPoint3d();

    int test3d(){
        cout<<"base test4d"<<endl;
        return 0;
    }
};
void Point4d::printPoint3d(){
    this->a=1;
    this->b=2;
    this->c=3;
    this->d=4;
    printf("point 4d print :a= %g,b= %g,c = %g ,d= %g\n",this->a,this->b,this->c,this->d);
}

void v_f_i_test() {

    point3d *point = new point3d();
    point->printPoint3d();

    point = new Point4d();
    point->printPoint3d();

    cout<<"--------------"<<endl;
    point3d *p3 = (point3d*)point;
    p3->printPoint3d();

    p3->test3d();
//    p3->test4d(); // 编译错误，被强转之后，内存被切割，point4d的内容已经看不到了

}






#endif //BASE_LEARN_VITURAL_FUN_INHERIT_H
