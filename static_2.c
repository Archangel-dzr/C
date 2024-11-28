/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 16:05:16
 * @LastEditTime: 2024-11-28 16:05:17
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\static_2.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */
//静态全局变量
#include<stdio.h>

static global_var = 10;
void print_global() {
    printf("Global var: %d\n", global_var);
}
//global_var 被声明为 static，因此它只能在static_2.c 文件中访问，不能从其他文件中通过 extern 关键字访问。