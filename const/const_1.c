/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 16:23:05
 * @LastEditTime: 2024-11-28 16:23:27
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\const\const_1.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */
#include <stdio.h>

int main() {
    const int a = 10;
    //a = 20; // 错误：不能修改常量
    printf("a: %d\n", a);
    return 0;
}
//对于基本数据类型，const 用于声明一个常量，其值在声明后不能被修改。