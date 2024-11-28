/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 16:00:09
 * @LastEditTime: 2024-11-28 16:01:20
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\static_1.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */

#include <stdio.h>

void counter() {
    static int count = 0; // 静态局部变量
    count++;
    printf("Count: %d\n", count);
}

int main() {
    counter(); // 输出: Count: 1
    counter(); // 输出: Count: 2
    counter(); // 输出: Count: 3
    return 0;
}
//count 是一个静态局部变量，因此每次调用 counter 函数时，count 的值都会保留下来，不会被重置。
//当 static 用于局部变量时，它会改变该变量的生命周期。通常情况下，局部变量在函数调用结束时会被销毁，但静态局部变量会在整个程序运行期间都存在，只初始化一次。