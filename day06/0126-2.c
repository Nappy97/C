//
// Created by Nappy on 2022-01-26.
//
#include "stdio.h"

int main(void) {
    int aa[3] = {10, 20, 30};

    printf("&aa[0]는 %d, aa + 0은 %d \n", &aa[0], aa + 0);
    printf("&aa[1]는 %d, aa + 1은 %d \n", &aa[1], aa + 1);
    printf("&aa[2]는 %d, aa + 2은 %d \n", &aa[2], aa + 2);
    return 0;
}

