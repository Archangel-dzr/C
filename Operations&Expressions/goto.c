/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-12-02 16:36:45
 * @LastEditTime: 2024-12-02 16:40:18
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\Operations&Expressions\goto.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int count = 0;

    start:
    if (count < 5) {
        printf("Count: %d\n", count);
        count++;
        goto start;
    }

    return 0;
}