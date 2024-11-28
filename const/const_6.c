/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 16:28:01
 * @LastEditTime: 2024-11-28 16:28:24
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\const\const_6.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    const struct Point p = {1, 2};
    // p.x = 3; // 错误：不能修改结构体成员
    printf("p.x: %d, p.y: %d\n", p.x, p.y);
    return 0;
}
//const 可以用于声明结构体变量为常量。