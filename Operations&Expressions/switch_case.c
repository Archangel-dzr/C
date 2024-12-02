/*
 * @Author: Archangel 781446156@qq.com
 * @Date: 2024-11-28 18:14:36
 * @LastEditTime: 2024-12-02 16:38:36
 * @LastEditors: Archangel 781446156@qq.com
 * @Description:  
 * @FilePath: \C\Operations&Expressions\switch_case.c
 * Copyright (c) 2024 by Archangel email: 781446156@qq.com, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }

    return 0;
}