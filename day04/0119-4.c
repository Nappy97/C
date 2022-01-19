//
// Created by User on 2022-01-19.
//
#include <stdio.h>

int numberCom(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

void usingToPro(void) {
    printf("두 정수를 입력해 주십시요.\n");
    printf("두 정수를 입력 시작 : \n");
}

int readNumber(void) {
    int num;
    scanf_s("%d", &num);
    return num;
}
void showResult(int num1, int num2, int result) {
    printf("%d와 %d중에서 큰 수는 %d입니다.\n", num1, num2, result);
}

int main(void) {
    int result, num1, num2;
    usingToPro();
    num1 = readNumber();
    num2 = readNumber();
    result = numberCom(num1, num2);
    showResult(num1,num2,result);
    return 0;
}