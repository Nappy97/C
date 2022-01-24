//
// Created by Nappy on 2022-01-24.
//
#include "stdio.h"
#include "string.h"

int main (void) {
    char ch[7] = "test";
    strcat(ch,"ab");
    printf("문자열은 %s \n", ch);
    return 0;
}
