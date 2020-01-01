#编译
gcc -g -Wall -o pth_hello pth_hello.c -lpthread

#运行 开启10个进程
./pth_hello 10