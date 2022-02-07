//
// Created by Nappy on 2022-01-28.
//
#include "stdio.h"

int main(void) {
    FILE *rfp;
    int hap = 0;
    int i, in;

    rfp = fopen("C://project//text//data2.txt", "r");

    for (i = 0; i < 5; i++) {
        fscanf(rfp, "%d", &in);
        hap = hap + in;

    }
    printf("sum : %d", hap);
    fclose(rfp);
    return 0;

}