//
// Created by Nappy on 2022-02-07.
//
#include "stdio.h"
#include "malloc.h"

int main(void) {
    int *p, *s;
    int i, j;

    printf("malloc() 함수 사용\n");
    p = (int *) malloc(sizeof(int) * 3);

    for (i = 0; i < 3; i++) {
        printf("할당된 메모리 초기값은 p[%d] = %d \n", i, p[i]);
    }
    free(p);

    printf("calloc() 함수 사용\n");
    s = (int *) calloc(sizeof(int), 3);

    for (j = 0; j < 3; j++) {
        printf("할당된 메모리 초기값은 s[%d] = %d \n", j, s[j]);
    }

    free(s);

}
