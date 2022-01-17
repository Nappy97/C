//
// Created by User on 2022-01-17.
//

#include <stdio.h>

int main(void) {
    /*printf("for문을 공부하자\n");
    printf("for문을 공부하자\n");
    printf("for문을 공부하자\n");
    printf("for문을 공부하자\n");
    printf("for문을 공부하자\n");
    printf("for문을 공부하자\n");
    printf("for문을 공부하자\n");*/

    for (int i = 0; i < 5; i++) {
        printf("for문을 공부하자\n");
    }

    int a;
    printf("숫자를 입력해주세요");   //todo 입력받은 구구단
    scanf_s("%d", &a);
    for (int i = 1; i < 10; i++) {
        printf("%d * %d = %d\n", a, i, a * i);
    }

    for (int i = 1; i < 10; i++) {  //todo 구구단
        for (int j = 1; j < 10; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
