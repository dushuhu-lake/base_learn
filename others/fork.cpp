#include <unistd.h>
#include <stdio.h>
int main()
{
　　pid_t pid; //定义进程ID变量
 
 　　int count=0;  //定义计数器
  
  　　pid = fork();  //调用fork函数
	/*
		 * 调用fork函数将创建一个新的进程
			 * 它们共享同一段程序代码
				 * 并且父进程和子进程会相继执行下面的程序代码
					 */
					  
						//调试代码
						　　printf( "This is first time, pid = %d\n", pid );
						　　printf( "This is secONd time, pid = %d\n", pid );
						 
						 　　count++;  //计数器自增
						  
						  　　printf( "count = %d\n", count );
						   
						   　　if ( pid>0 )
						   　　{
							//父进程执行此段代码
								　　printf( "This is the parent process,the child has the pid:%d\n", pid );
								　　}
								　　else if ( !pid )
								　　{
									//子进程执行此段代码
									　　	printf( "This is the child Process.\n")
									　　}
									　　else
									　　{
										//出错
										　　	printf( "fork failed.\n" );
										　　}
										 
											//调试代码
											　　printf( "This is third time, pid = %d\n", pid );
											　　printf( "This is fouth time, pid = %d\n", pid );
											 
											 　　return 0;
											 　　}
											
