/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 16:26:31
 * @LastEditTime: 2024-11-28 16:26:54
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\const\const_4.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */
#include <stdio.h>

int main() {
    const int a = 10;
    const int b = 20;
    const int *const p = &a;
    // p = &b; // 错误：不能修改指针 p 的值
    // *p = 30; // 错误：不能通过 p 修改 a
    printf("a: %d\n", *p);
    return 0;
}
//const 同时放在指针和指针所指向的值前面，表示指针本身和指针所指向的值都是常量。