//
// Created by User on 2022-01-17.
//
#include <stdio.h>

int main(void) {
    int hap = 0;
    int i;
    int num1, num2, num3;

    printf("시작 값, 끝 값, 증가 값을 입력");
    scanf_s("%d %d %d", &num1, &num2, &num3);

    for (i = num1; i < num2; i = i + num3) {
        hap = hap + i;
    }

    printf("%d에서 %d까지의 %d씩 증가한 값의 합은 : %d\n", num1, num2, num3, hap);
    return 0;
}
