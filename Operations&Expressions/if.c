/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 18:12:25
 * @LastEditTime: 2024-11-28 18:14:16
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\Operations&Expressions\if.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int x = 10;

    if (x > 0) {
        printf("x is positive.\n");
    } else if (x < 0) {
        printf("x is negative.\n");
    } else {
        printf("x is zero.\n");
    }

    return 0;
}