//
// Created by 89674 on 2019/6/27.
//

#ifndef BASE_LEARN_SIZEOF_TEST_H
#define BASE_LEARN_SIZEOF_TEST_H

#include<stdio.h>
/**
 * sizeof()  可以计算类型（如int），普通对象（如int a）， 类对象（如class Student）
 * 他的计算过程是在编译的时候就确定了的。
 * 编译的时候编译器有充分的理由和方法知道任何一个对象或类型的大小。
 */
int main(){
    int a[10];
    int b = sizeof a;
}

/**
 * 问题？
 *      char arr[10];
        sizeof(arr) =10;请问是如何计算数组大小的？这里只是把地址传给sizeof啊？
   严格讲，sizeof(arr) =10; 这里只是把地址传给sizeof啊？
   你这句话是错误的，你传的是数组名，数组名不等价于地址。
   sizeof(arr)这行不是程序执行到这里的时候才去求值的。所以不是你想的‘光凭指针如何知道数组长度’。
并且sizeof(arr)计算的数组所占字节数，并非数组长度，数组长度=sizeof(arr)/sizeof(char)

sizeof是关键字，是在编译阶段处理的。也就是说你程序没有运行前，sizeof(arr)就被替换成了一个固定的常量，保存在了test.out中了。你可以试试这样写 sizeof ptr也是不会报错的，这说明了sizeof不是函数。

执行gcc -S test.c：

 .file   "test.c"
        .text
        .globl  main
        .type   main, @function
main:
.LFB0:
        .cfi_startproc
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register 6
        movl    $40, -4(%rbp)   //看这里!!!!!!
        popq    %rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE0:
        .size   main, .-main
        .ident  "GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
        .section        .note.GNU-stack,"",@progbits

  你会发现编译阶段这里已经计算出了数组a的大小：40.
  注意，这里的数组长度 = sizeof(a)/sizeof(int) = 40/4 = 10





 */

#endif //BASE_LEARN_SIZEOF_TEST_H
