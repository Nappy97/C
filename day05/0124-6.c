//
// Created by Nappy on 2022-01-24.
//

#include "stdio.h"
#include "string.h"

int main(void) {
    char ch[] = "test";
    int len;

    len = strlen(ch);

    printf("문자열 \"%s\"길이는 : %d \n", ch, len);
    return 0;
}