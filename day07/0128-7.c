//
// Created by Nappy on 2022-01-28.
//
#include "stdio.h"
#include "string.h"

int main(void) {
    char str1[250], str2[250];
    FILE *rfp;
    FILE *wfp;
    int i,size;

    rfp = fopen("C://project/text/win2.ini", "r");
    wfp = fopen("C://project/text/gildong.txt", "w");

    for (;;) {
        fgets(str1, 250, rfp);
        if (feof(rfp))
            break;
        size=(int)strlen(str1);
        for(i=size-1;i>=0;i--){
            str2[size-1-i] = str1[i-1];
        }
        str2[size-1] = '\0';
        fputs(str2,wfp);
        fputs("\n", wfp);
    }
    fclose(rfp);
    fclose(wfp);
    return 0;
}
