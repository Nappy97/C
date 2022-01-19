//
// Created by User on 2022-01-19.
//

#include <stdio.h>

int main(void) {
    int num[3];
    int i;
    int maxNum;
    int minNum;

    for (i = 0; i < 3; i++) {
        printf("%d번째 숫자를 입력하세요 : ", i + 1);
        scanf_s("%d", &num[i]);
    }

    if (num[0] >= num[1] && num[0] >= num[2]) {
        maxNum = num[0];
        if (num[1] <= num[2]) {
            minNum = num[1];
        } else {
            minNum = num[2];
        }
    } else if (num[1] >= num[0] && num[1] >= num[2]) {
        maxNum = num[1];
        if (num[2] <= num[1]) {
            minNum = num[0];
        } else {
            minNum = num[0];
        }
    } else {
        maxNum = num[2];
        if (num[0] <= num[1]) {
            minNum = num[0];
        } else {
            minNum = num[1];
        }
    }
    printf("\n가장 큰 값은 [%d ]입니다.\n\n", maxNum);
    printf("\n 가장 작은 값은[%d ]입니다 \n", minNum);
    return 0;
}