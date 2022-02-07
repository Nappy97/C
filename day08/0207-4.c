//
// Created by Nappy on 2022-02-07.
//
#include "stdio.h"
#include "malloc.h"
#include "string.h"

int main(void) {
    struct student {
        int a;
        float b;
        char c;
        char d[5];
    };

    struct student st;

    st.a = 10;
    st.b = 1.2f;
    st.c = 'A';
    strcat(st.d, "BCD");

    printf("st.a = %d \n", st.a);
    printf("st.b = %f \n", st.b);
    printf("st.c = %c \n", st.c);
    printf("st.d = %s \n", st.d);

    return 0;
}