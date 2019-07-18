//
// Created by 89674 on 2019/6/30.
//

#ifndef BASE_LEARN_ASSERT_DEBUG_H
#define BASE_LEARN_ASSERT_DEBUG_H


//   下面是assert 宏定义的源代码
//    #ifdef NDEBUG
//    #define assert(_Expression) ((void)0)  // 执行一条空语句
//    #else /* !defined (NDEBUG) */
//    #if defined(_UNICODE) || defined(UNICODE)
//    #define assert(_Expression) \
//     (void) \
//     ((!!(_Expression)) || \
//      (_wassert(_CRT_WIDE(#_Expression),_CRT_WIDE(__FILE__),__LINE__),0))
//    #else /* not unicode */
//    #define assert(_Expression) \
//     (void) \
//     ((!!(_Expression)) || \
//      (_assert(#_Expression,__FILE__,__LINE__),0))
//    #endif /* _UNICODE||UNICODE */
//    #endif /* !defined (NDEBUG) */

// 分析源代码可以知道 加上“#define NDEBUG”，可以告诉编译器编译的时候不将assert语句编译进去，即不再执行assert，
// 所以assert可以用于开发中调试中，在上线的时候只需要在cmakelists.txt上添加上面这个编译选项就可以注释掉所有assert语句。
#define NDEBUG
#include <cassert>

void assert_test(){
    int a = 10;
    assert(a == 1);
}

/**
 * assert 是一个宏定义。
 * assert 错误的显示信息：
 * Assertion failed!
 * Expression: a == 1
 */





#endif //BASE_LEARN_ASSERT_DEBUG_H
