/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 16:24:29
 * @LastEditTime: 2024-11-28 16:24:51
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\const\const_2.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */
#include <stdio.h>

int main() {
    const int a = 10;
    const int *p = &a;
    //*p = 20; // 错误：不能通过 p 修改 a
    printf("a: %d\n", *p);
    return 0;
}
//const 放在指针所指向的值前面，表示指针所指向的值是常量，不能通过该指针修改。