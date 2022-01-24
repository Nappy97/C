//
// Created by Nappy on 2022-01-24.
//

#include "stdio.h"

void func(void) {
    static int num1 = 0;
    int num2 = 0;
    num1++, num2++;
    printf("static : %d, local : %d \n", num1, num2);
}

int main(void) {
    int i;
    for (i = 0; i < 3; i++) {
        func();
    }
    return 0;
}
