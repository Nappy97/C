//
// Created by Nappy on 2022-02-09.
//
#include "stdio.h"

int main(void) {
    struct student {
        char name[15];
        int kor;
        int eng;
        float avg;
    };

    struct student std;

    printf("이름 : ");
    scanf("%s", std.name, 9);

    printf("국어 점수 : ");
    scanf("%d", &std.kor);

    printf("영어 점수 : ");
    scanf("%d", &std.eng);

    std.avg = (std.kor + std.eng) / 2.0;

    printf("\n");
    printf("학생 이름 : %s \n",std.name);
    printf("국어 점수 : %d \n",std.kor);
    printf("영어 점수 : %d \n",std.eng);
    printf("평균 점수 : %5.1f \n",std.avg);
}
