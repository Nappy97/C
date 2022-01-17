//
// Created by User on 2022-01-17.
//
#include <stdio.h>

int main(void) {
    int a;
    int b;
    char o;
    int result = 0;

    printf("첫번째 정수를 입력해 주세요 : ");
    scanf_s("%d", &a);

    printf("연산자(+,-,*,/,%)를 입력해 주세요 : ");
    scanf_s(" %c", &o); //todo %기호앞에 스페이스를 입력하여 NULL값을 대체

    printf("두번째 정수를 입력해 주세요 : ");
    scanf_s("%d", &b);

    switch (o) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            printf("잘못된 연산자입니다.");
    }
    printf("%d %c %d = %d\n", a, o, b, result);
}

