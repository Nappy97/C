//
// Created by Nappy on 2022-01-28.
//
#include "stdio.h"

int main(void) {
    FILE *wfp;
    int gugudan[10][10];
    int i,j;

    wfp = fopen("C://project/text/data5.txt", "w");

    for (i = 1; i < 10; i++) {  //todo 구구단
        for (j = 1; j < 10; j++) {
            gugudan[i][j] = i * j;
            printf("%d X %d = %d \n", i, j, gugudan[i][j]);
        }
    }
    fputs(gugudan, wfp);
    fclose(wfp);
    return 0;
}

