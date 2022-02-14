//
// Created by Nappy on 2022-02-09.
//
#include "stdio.h"
#include "malloc.h"

int main(void) {
    struct student {
        char name[15];
        int age;
    };

    struct student *p;

    int cnt, i;

    printf("입력할 학생의 수 : ");
    scanf("%d", &cnt);

    p = (struct student *) malloc((sizeof(struct student)) * cnt);

    for (i = 0; i < cnt; i++) {
        printf("이름 및 나이 입력 : ");
        scanf("%s %d", p[i].name, &p[i].age);
    }

    printf("\n=====학생명단========\n");
    for (i = 0; i < cnt; i++) {
        printf("이름 : %s , 나이 : %d \n", p[i].name, p[i].age);
    }
    free(p);
}
