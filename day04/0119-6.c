//
// Created by User on 2022-01-19.
//

#include <stdio.h>

int funcOne(void) {
    int num = 10;
    num++;
    printf("FuncOne num : %d\n", num);
    return 0;
}

int funcTwo(void) {
    int num1 = 20;
    int num2 = 30;
    num1++, num2--;
    printf("num1 & num2 : %d %d \n", num1, num2);
    return 0;
}

int main(void){
    int num = 17;
    funcOne();
    funcTwo();
    printf("main num : %d\n", num);
    return 0;
}
