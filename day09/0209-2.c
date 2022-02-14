//
// Created by Nappy on 2022-02-09.
//
#include "stdio.h"
#include "string.h"

int main(void) {
    struct student {
        char name[15];
        int kor;
        int eng;
        float avg;
    };

    struct student std[3];

    int i;

    strcpy(std[0].name, "kim");
    std[0].kor = 50;
    std[0].eng = 60;
    std[0].avg = (std[0].kor + std[0].eng) / 2.0f;

    strcpy(std[1].name, "lee");
    std[1].kor = 90;
    std[1].eng = 70;
    std[1].avg = (std[1].kor + std[1].eng) / 2.0f;

    strcpy(std[2].name, "park");
    std[2].kor = 55;
    std[2].eng = 80;
    std[2].avg = (std[2].kor + std[2].eng) / 2.0f;

    printf("=============구조체 배열 출력============");
    for (i = 0; i < 3; i++) {
        printf("학생 이름 : %s \n", std[i].name);
        printf("국어 점수 : %d \n", std[i].kor);
        printf("영어 점수 : %d \n", std[i].eng);
        printf("평균 점수 : %5.1f \n",std[i].avg);
    }
}
