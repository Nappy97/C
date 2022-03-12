//
// Created by Nappy on 2022-03-02.
//
#include "stdio.h"
#include "stdlib.h"

typedef struct _node {
    int data;
    struct _node *next;
}_node;

_node *head,*end;
_node *ptrNode;

void Init_stack(void );
void push(int );
void display_stack(void );

int main(void ){
    int ret;
    Init_stack();

    push(1);
    push(2);
    push(3);
    push(11);
}

void Init_stack(){
    head =(_node*) malloc(sizeof (_node));
    end =(_node*) malloc(sizeof (_node));
    head->next =end;
    end->next=end;
}

void push(int num){
    ptrNode = (_node*) malloc(sizeof (_node));
    ptrNode -> data = num;
    ptrNode->next = head->next;
    head->next = ptrNode;
}