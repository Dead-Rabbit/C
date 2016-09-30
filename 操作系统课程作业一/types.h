#ifndef types_h
#define types_h

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
typedef struct Node{
    int id;
    int prio;
    int state;
    struct Node *next;
}node;
typedef struct{
    node *first;
}Link;
Link *link;
void InitNode(node **newNode,int id,int prio,int state){
    (*newNode) = (node *)malloc(sizeof(node));
    (*newNode)->id = id;
    (*newNode)->prio = prio;
    (*newNode)->state = state;
    (*newNode)->next = NULL;
}
void gotoxy(int x, int y)
{
    HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos={x,y};
    SetConsoleCursorPosition(handle, pos);
}
#endif /* types.h */
