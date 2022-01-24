//
// Created by Nappy on 2022-01-24.
//

#include "stdio.h"

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    // int arr[] = {10,20,30,40,50}
    int sum = 0, i;

    /*arr[0] = 10, arr[1] = 20, arr[2] = 50, arr[3] = 30, arr[4] = 40;*/

    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("배열의 총 합은 : %d \n", sum);
    return 0;
}
