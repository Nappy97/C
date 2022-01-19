//
// Created by User on 2022-01-19.
//

#include <stdio.h>

int numberCom(int num1, int num2);

int main(void ) {
    printf("4와 7중에서 큰 수는 %d 입니다. \n", numberCom(4, 7));
    printf("7과 2중에서 큰 수는 %d 입니다. \n", numberCom(7, 2));
    return 0;
}

int numberCom(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}
