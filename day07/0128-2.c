//
// Created by Nappy on 2022-01-28.
//
#include "stdio.h"

int main(void) {
    char str[250];
    FILE *rfp;

    rfp = fopen("C://project/text//win.ini", "r");
    for (   ;   ;   ) {
        fgets(str, 250, rfp);
        if(feof(rfp))
            break;

        printf("%s", str);
    }
    fclose(rfp);
    return 0;
}