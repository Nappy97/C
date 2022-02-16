//
// Created by Nappy on 2022-02-16.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct ArrayListNodeType {
    int data;
} ArrayListNode;

typedef struct ArrayListType {
    int macCount;
    int currentCount;
    ArrayListNode *pData;
} ArrayList;

ArrayList *createList(int count) {

    ArrayList *pReturn = (ArrayList *) malloc(sizeof(ArrayList));
    pReturn->macCount = count;
    pReturn->currentCount = 0;
    pReturn->pData = (ArrayListNode *) malloc(sizeof(ArrayListNode) * count);
    memset(pReturn->pData, 0, sizeof(ArrayListNode) * count);

    return pReturn;
}

int addListData(ArrayList*pList, int position, int data){
    int i=0;
    for(i=pList->currentCount-1;i>=position;i--){
        pList->pData[i+1] = pList->pData[i];
    }
    pList->pData[position].data=data;
    pList->currentCount++;
    return 0;
}
