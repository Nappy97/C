//
// Created by Nappy on 2022-01-24.
//
#include "stdio.h"

int main(void) {
    char ch[] = "First C Programming!";
    printf("배열 ch의 크기는 : %d \n", sizeof(ch));
    printf("NULL 문자형 출력 : %c \n", ch[20]);
    printf("NULL 문자형 정수 출력 : %d \n", ch[20]);

    ch[7] = "-";
    printf("문자열 출력 : %s \n", ch);

    return 0;

}
