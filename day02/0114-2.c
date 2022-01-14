//
// Created by User on 2022-01-14.
//
#include <stdio.h>

int main(void) {
    int a, b;
    int result;

    printf("첫 번째 정수를 입력해 주세요 : ");
    scanf_s("%d", &a);
    printf("두 번째 정수를 입력해 주세요 : ");
    scanf_s("%d", &b);

    result = a + b;

    printf("%d + %d = %d\n", a,b,result);
}

