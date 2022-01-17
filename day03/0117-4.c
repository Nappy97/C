//
// Created by User on 2022-01-17.
//

#include <stdio.h>

int main(void) {
    int a;

    printf("점수를 입력해 주십시요 : ");
    scanf_s("%d", &a);  //&는 주소연산자

    if (a >= 90) {
        printf("A");
    } else if (a >= 80) {
        printf("B");
    } else if (a >= 70) {
        printf("C");
    } else {
        printf("D");
    }
    printf(" 학점입니다.");
    return 0;
}

