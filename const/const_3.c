/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 16:25:25
 * @LastEditTime: 2024-11-28 16:25:47
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\const\const_3.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int *const p = &a;
    // p = &b; // 错误：不能修改指针 p 的值
    *p = 30; // 正确：可以修改 p 所指向的值
    printf("a: %d\n", *p);
    return 0;
}
//const 放在指针本身的前面，表示指针本身是常量，不能修改指针的值。