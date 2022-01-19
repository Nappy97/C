//
// Created by User on 2022-01-19.
//
#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

void showAddResult(int num) {
    printf("덧셈의 결과 : %d \n", num);
}

int readNumber(void) {
    int num;
    scanf_s("%d", &num);
    return num;
}

void usingToPro(void) {
    printf("두 정수를 입력해 주십시요.\n");
    printf("두 정수를 입력 시작 : \n");
}

int main(void) {
    int result, num1, num2;
    usingToPro();
    num1 = readNumber();
    num2 = readNumber();
    result = add(num1, num2);
    showAddResult(result);
    return 0;
}

