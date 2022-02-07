//
// Created by Nappy on 2022-02-07.
//

#include "stdio.h"

int main(void) {
    int aa[3];
    int *p;
    int i, hap = 0;

    for (i = 0; i < 3; i++) {
        printf("%d th number : ", i + 1);
        scanf("%d", &aa[i]);
    }

    p = aa;

    for (i = 0; i < 3; i++) {
        hap = hap + *(p + i);
    }

    printf("sum of scan num is : %d \n", hap);
}