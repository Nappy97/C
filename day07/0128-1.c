//
// Created by Nappy on 2022-01-28.
//
#include "stdio.h"

int main(void) {
    char s[30];
    FILE *rfp;
    rfp = fopen("c://project/text/data1.txt", "r");

    fgets(s, 30, rfp);

    printf("read String is : ");
    puts(s);        //화면에 출력

    fclose(rfp);
    return 0;
}
