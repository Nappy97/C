﻿//
// Created by Nappy on 2022-02-09.
//
#include "stdio.h"

int main(void) {
    char name[10];
    int kor;
    int eng;
    float avg;

    printf("이름 : ");
    scanf("%s", name, 9);

    printf("국어 점수 : ");
    scanf("%d", &kor);

    printf("영어 점수 : ");
    scanf("%d", &eng);

    avg = (kor + eng) / 2.0;

    printf("\n");
    printf("학생 이름 : %s \n",name);
    printf("국어 점수 : %d \n",kor);
    printf("영어 점수 : %d \n",eng);
    printf("평균 점수 : %5.1f \n",avg);
}
