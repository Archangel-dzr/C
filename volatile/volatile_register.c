/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 16:16:38
 * @LastEditTime: 2024-11-28 16:17:36
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\volatile_register.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */
#include <stdio.h>

#define GPIO_REG ((volatile unsigned int*)0x40000000)

void configure_gpio() {
    *GPIO_REG = 0x01; // 设置某个位
}

int main() {
    configure_gpio();
    unsigned int status = *GPIO_REG;
    printf("GPIO status: 0x%08X\n", status);
    return 0;
}
//GPIO_REG 是一个指向硬件寄存器的指针，被声明为 volatile。这样可以确保每次读取或写入 GPIO_REG 时都直接从内存中操作，而不是使用缓存中的值。