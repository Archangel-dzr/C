/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-12-02 16:36:03
 * @LastEditTime: 2024-12-02 16:39:38
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\Operations&Expressions\do_while.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int count = 0;

    do {
        printf("Count: %d\n", count);
        count++;
    } while (count < 5);

    return 0;
}