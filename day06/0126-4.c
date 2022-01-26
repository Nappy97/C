//
// Created by Nappy on 2022-01-26.
//

#include "stdio.h"

int main(void) {
    char s[10] = "C-Program";
    char *p;
    int i;

    p = s;

    for (i = sizeof(s) - 2; i >= 0; i--) {
        printf("%c", *(p + i));
    }

    return 0;
}