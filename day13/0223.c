//
// Created by Nappy on 2022-02-23.
//
#include "stdio.h"
#include "stdlib.h"

typedef struct _node {
    int data;
    struct node *pNext;
} node;

int main(void) {
    node *head = NULL;
    node *tail = NULL;
    node *current = NULL;

    node *newNode = NULL;
    int dataRead;

    while (1) {
        printf("정수를 입력해 주세요 : ");
        scanf("%d", &dataRead);
        if (dataRead < 1)
            break;

        newNode = (node *) malloc(sizeof(node));
        newNode->data = dataRead;
        newNode->pNext = NULL;

        if (head == NULL)
            head = newNode;
        else
            tail->pNext = newNode;

        tail = newNode;
    }
    printf("\n\n");


    printf("리스트 출력 \n");
    if (head == NULL) {
        printf("출력할 리스트가 없습니다.");
    } else {
        current = head;
        printf("%d", current->data);

        while (current->pNext != NULL) {
            current = current->pNext;
            printf("%d", current->data);
        }
    }

    printf("\n\n");

    return 0;
}
