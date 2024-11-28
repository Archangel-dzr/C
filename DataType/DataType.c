/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 18:01:18
 * @LastEditTime: 2024-11-28 18:02:17
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\DataType\DataType.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */
#include <stdio.h>

int main() {
    // char 类型
    char ch = 'A';
    printf("char: %c, size: %zu bytes\n", ch, sizeof(ch));

    // short 类型
    short s = 1000;
    printf("short: %hd, size: %zu bytes\n", s, sizeof(s));

    // int 类型
    int i = 100000;
    printf("int: %d, size: %zu bytes\n", i, sizeof(i));

    // long 类型
    long l = 1000000000L;
    printf("long: %ld, size: %zu bytes\n", l, sizeof(l));

    // unsigned 类型
    unsigned int ui = 4294967295U; // 最大值
    printf("unsigned int: %u, size: %zu bytes\n", ui, sizeof(ui));

    // float 类型
    float f = 3.141592f;
    printf("float: %f, size: %zu bytes\n", f, sizeof(f));

    // double 类型
    double d = 3.14159265358979323846;
    printf("double: %lf, size: %zu bytes\n", d, sizeof(d));

    return 0;
}