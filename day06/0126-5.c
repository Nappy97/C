//
// Created by Nappy on 2022-01-26.
//

#include "stdio.h"
#define MAX_LENGTH  64

int main() {
    int i, len=0;
    char str[MAX_LENGTH];

    printf("Input String: ");
    scanf("%[^\n]s", str, MAX_LENGTH-1);

    while(str[len] != 0) len++;

    printf("-> ");

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}