//
// Created by Nappy on 2022-01-26.
//
#include "stdio.h"

int main(void) {
    int aa[3] = {10, 20, 30};

    printf("aa[0]의 값은 %d, 주소는 %d \n", aa[0], &aa[0]);
    printf("aa[1]의 값은 %d, 주소는 %d \n", aa[1], &aa[1]);
    printf("aa[2]의 값은 %d, 주소는 %d \n", aa[2], &aa[2]);

    printf("배열 이름 aa의 주소 값은 %d \n", aa);



    return 0;
}
