#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int thread_count;

void* Hello(void * rank);

int main(int argc, char* argv[]){
    long thread;
    pthread_t *thread_handles;// 用于存储线程信息

    thread_count = strtol(argv[1], NULL, 10);

    thread_handles = malloc(thread_count * sizeof(pthread_t));

    for (thread = 0; thread < thread_count ; thread++) {
        pthread_create(&thread_handles[thread], NULL,
                Hello, (void*) thread);
    }
    /**
     * 创建好线程之后，即会开始运行线程，所以主线程pthread_create之后的代码可能会比子线程更后运行
     * 所有子线程可能会运行在同一个核，也可能不在一个核，这由操作系统查看各个核的负载情况来调度
     */



    printf("Hello from the main thread \n");

    /**
     * join函数，只是为了检查所有子线程是否已经正确运行，每调用一次join，主线程都要等那个子线程结束才能继续
     * 所有子线程运行完之后，回到主线程，主线程继续执行join之后的代码。
     */
    for (thread = 0; thread < thread_count; thread++) {
        pthread_join(thread_handles[thread], NULL);
    }
    printf("ending \n");

    free(thread_handles);

    return 0;
}

void *Hello(void* rank){
    long my_rank = (long)rank;
    printf("Hello from thread %ld of %d \n", my_rank, thread_count);
    return NULL;
}