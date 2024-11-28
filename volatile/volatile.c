/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 16:14:04
 * @LastEditTime: 2024-11-28 16:14:26
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\volatile\volatile.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

volatile int flag = 0;

void signal_handler(int signum) {
    if (signum == SIGINT) {
        flag = 1;
    }
}

int main() {
    signal(SIGINT, signal_handler);

    while (!flag) {
        // 等待信号
    }

    printf("Signal received, exiting...\n");
    return 0;
}
//flag 被声明为 volatile，因为它的值可能在信号处理函数中被改变。
//如果没有 volatile，编译器可能会优化掉对 flag 的读取，导致程序永远卡在 while 循环中。