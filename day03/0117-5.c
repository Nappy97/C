//
// Created by User on 2022-01-17.
//
#include <stdio.h>

int main(void ){
    int a;

    printf("1 ~ 4까지의 숫자를 입력해 주십시요 : ");
    scanf_s("%d", &a);

    switch (a) {
        case 1:
            printf("1번을 선택하셨군요.");
            break;
        case 2:
            printf("2번을 선택하셨군요.");
            break;
        case 3:
            printf("3번을 선택하셨군요.");
            break;
        case 4:
            printf("4번을 선택하셨군요.");
            break;
        default:
            printf("잘못 선택하셨습니다.");
    }
}
