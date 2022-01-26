//
// Created by Nappy on 2022-01-26.
//
#include "stdio.h"

int main(void) {
    char s[10] = "C-Program";

    char *p;

    p = s;

    printf("p + 3 : %s \n", p + 3);
    printf("s[3] : %c \n", s[3]);
    printf("s[3] : %s \n", s[3]);   //문자열이기 때문에 오류가 발생
    printf("*(p + 3) : %c \n", *(p + 3));

    return 0;
}

