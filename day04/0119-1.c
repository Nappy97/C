//
// Created by User on 2022-01-19.
//
#include <stdio.h>

int add(int num1, int num2);

int main(void) {
    int result;
    result = add(3, 4);
    printf("결과1 : %d", result);

    result = add(6,4);
    printf("결과2 : %d", result);
    return 0;
}

int add(int num1, int num2){
    return num1 + num2;
}
