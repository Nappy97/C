//
// Created by Nappy on 2022-01-26.
//
#include "stdio.h"

int main(void) {
    int num1 = 100, num2 = 200;
    int *pNum;

    pNum = &num1;
    (*pNum) += 30;  //num1 +=30;

    pNum = &num2;
    (*pNum) -= 30;

    printf("num1 : %d, num2 : %d \n", num1, num2);
    return 0;
}