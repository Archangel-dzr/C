/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 18:11:36
 * @LastEditTime: 2024-11-28 18:13:26
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\Operations&Expressions\operater.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int a = 10;  // 赋值运算符 =
    int b = 5;

    // 算术运算符
    int sum = a + b;  // 加法 +
    int difference = a - b;  // 减法 -
    int product = a * b;  // 乘法 *
    int quotient = a / b;  // 除法 /
    int remainder = a % b;  // 取模 %

    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("a / b = %d\n", quotient);
    printf("a %% b = %d\n", remainder);

    // 赋值运算符的组合形式
    a += b;  // 等同于 a = a + b
    printf("a += b: %d\n", a);

    a -= b;  // 等同于 a = a - b
    printf("a -= b: %d\n", a);

    a *= b;  // 等同于 a = a * b
    printf("a *= b: %d\n", a);

    a /= b;  // 等同于 a = a / b
    printf("a /= b: %d\n", a);

    a %= b;  // 等同于 a = a % b
    printf("a %%= b: %d\n", a);

    return 0;
}