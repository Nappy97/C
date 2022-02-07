//
// Created by Nappy on 2022-02-07.
//
#include "stdio.h"

int main(void) {
    int aa[1000];
    int *p;
    int i, hap = 0;
    int cnt;

    printf("입력할 개수는 : ");
    scanf("%d", &cnt);

    for (i = 0; i < cnt, i++) {
        printf("%d 번째 숫자 : ", i + 1);
        scanf("%d", &aa[i]);
    }

    p = aa;

    for (i = 0; i < cnt; i++) {
        hap = hap + *(p + i);

        printf("입력한 숫자의 합은 : %d\n", hap);
    }
}

