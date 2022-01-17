//
// Created by User on 2022-01-17.
//

#include <stdio.h>

int main(void) {
    int a, b = 5, c = 3;
    a = b + c;
    printf("%d + %d = %d \n", b, c, a);

    a = b - c;
    printf("%d - %d = %d \n", b, c, a);

    a = b * c;
    printf("%d * %d = %d \n", b, c, a);

    a = b / c;
    printf("%d / %d = %d \n", b, c, a);

    a = b % c;  //todo 나눈후 나머지 값을 출력
    printf("%d %% %d = %d \n", b, c, a);

    return 0;
}