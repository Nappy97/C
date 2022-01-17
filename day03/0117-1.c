//
// Created by User on 2022-01-17.
//
#include <stdio.h>

int main(void) {
    int a = 10;
    int b;

    b = a++;
    printf("%d\n", b);  //todo 10

    b = ++a;
    printf("%d\n", b);  //todo 12

    return 0;
}

