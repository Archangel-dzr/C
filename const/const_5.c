/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 16:27:25
 * @LastEditTime: 2024-11-28 16:27:47
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\const\const_5.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */
#include <stdio.h>

int main() {
    const int arr[3] = {1, 2, 3};
    // arr[0] = 4; // 错误：不能修改数组元素
    printf("arr[0]: %d\n", arr[0]);
    return 0;
}
//const 可以用于声明数组元素为常量。