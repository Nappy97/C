﻿//
// Created by Nappy on 2022-02-07.
//
#include "stdio.h"
#include "malloc.h" // 메모리 관련 함수

int main(void) {
    int *p;
    int i, hap = 0;
    int cnt;

    printf("입력할 개수는 : ");
    scanf("%d", &cnt);

    p = (int *) malloc(sizeof(int) * cnt);

    for (i = 0; i < cnt; i++) {
        printf("%d 번째 숫자 : ", i + 1);
        scanf("%d", p + i);
    }

    for(i=0;i<cnt;i++){
        hap=hap+*(p+i);
    }

    printf("입력한 숫자의 합은 : %d\n",hap);

    free(p);

    return 0;
}

