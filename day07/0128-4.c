//
// Created by Nappy on 2022-01-28.
//
#include "stdio.h"

int main(void){
    char str[250];
    FILE *rfp;
    FILE *wfp;

    rfp = fopen("C://project/text/win2.ini", "r");
    wfp = fopen("C://project/text/data3.txt", "w");

    for(;;){
        fgets(str,250,rfp);
        if(feof(rfp))
            break;

        fputs(str, wfp);
    }
    fclose(rfp);
    fclose(wfp);
    return 0;
}