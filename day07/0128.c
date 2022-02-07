//
// Created by Nappy on 2022-01-28.
//

#include "string.h"
#include "stdio.h"

int main(void) {
    char s[25];     //문자열 배열 선언
    FILE *wfp;      //파일 포인터 선언;

    wfp = fopen("C://project/text/data.txt", "w");

    printf("Input the String (Max = 24) : ");
    gets(s);      //사용자가 문자열을 입력

    fputs(s, wfp);

    fclose(wfp);
    return 0;
}