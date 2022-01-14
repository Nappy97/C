//
// Created by User on 2022-01-14.
//

#include <stdio.h> //todo 전처리 지시자

int main(void) {    //todo main 함수는 프로젝트당 1개
    int a, b;   //todo 같은 데이터형의 경우 ,를 이용할 수 있다. and 지역변수
    int result; //todo result도 위로 올려도 된다.

    a = 100; //todo int에 선언과 초기화를 같이해도 됨.
    b = 200;

    result = a + b;

    printf("%d + %d = %d\n", a, b, result); //todo %d = %i

    result = a - b;

    printf("%d - %d = %d\n", a, b, result);

    result = a * b;

    printf("%d * %d = %d\n", a, b, result);

    result = a / b;

    printf("%d / %d = %d", a, b, result);



}


