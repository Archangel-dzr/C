/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 16:28:35
 * @LastEditTime: 2024-11-28 16:29:12
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\const\const_7.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */
#include <stdio.h>

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        // arr[i] = 0; // 错误：不能修改数组元素
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    return 0;
}
//函数参数中使用 const 可以确保函数内部不会修改传入的参数。