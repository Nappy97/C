//
// Created by Nappy on 2022-01-28.
//
#include "stdio.h"

int main(void) {
    FILE *wfp;
    int hap = 0;
    int in, i;

    wfp = fopen("C://project/text/data4.txt", "w");

    for (i = 0; i < 5; i++) {
        printf("Number %d : ", i + 1);
        scanf("%d", &in);
        hap = hap + in;
    }

    fprintf(wfp, "sum: %d \n", hap);
    fclose(wfp);
    return 0;
}
