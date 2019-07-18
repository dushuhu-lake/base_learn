//
// Created by 89674 on 2019/7/10.
//

#ifndef BASE_LEARN_CPPTHREADMUTEX_H
#define BASE_LEARN_CPPTHREADMUTEX_H

#include <pthread.h>
#include <iostream>
#include <zconf.h>

pthread_mutex_t mutex;

void *print_msg(void *arg){
    int i = 0;
    pthread_mutex_lock(&mutex);
    for (int j = 0; j < 15; ++j) {
        std::cout<<" out put :"<<j<<std::endl;
        sleep(1);
    }
    pthread_mutex_unlock(&mutex);
}

void test_pthread_mutex(){
    pthread_t id1;
    pthread_t id2;
    // mutex 互斥锁 是全局的 id1 id2两个线程争夺该锁
    pthread_mutex_init(&mutex,NULL);
    // 两个线程可以是同一个函数，也可以不是同一个函数，比如一个读一个取
    pthread_create(&id1,NULL,print_msg,NULL);
    pthread_create(&id2,NULL,print_msg,NULL);
    // 将会一个线程一个线程的执行
    pthread_join(id1,NULL);
    pthread_join(id2,NULL);
    pthread_mutex_destroy(&mutex);
}

#endif //BASE_LEARN_CPPTHREADMUTEX_H
