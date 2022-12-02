#include "List_base.h"


int InsertList(List L,int elem,int position){//insert an element before the position
    List p = L;
    int j = 0;
    while(p&&j<position-1){
        j++;
        p = p->next;
    }
    Node *s =(Node*)malloc(sizeof(Node));
    s->data  = elem;
    s->next = p->next;
    p->next = s;
    return 0;
}

int CheckList(List L,int elem){
    List p = L;
    int i =  0;
    while(p->data != elem){
        p = p->next;
        i++;
    }
    if(i>Getlength(L)){
        printf("we cant find this element\n");
        return 1;
    }
    printf("%d is at the position of %d\n",elem,i);
    return 0;
}

int Getlength(List L){
    List p = L;
    int i = 0;
    while(p){
        p = p->next;
        i++;
    }
    return i;
}

int DestoryList(List L){
    L->next = NULL;
    return 0;
}

int DeleteElem(List L,int position,int *rt){
    List p = L;
    int i = 0;
    while(p&&i<position-1){
        i++;
        p = p->next;
    }
    *rt = p->next->data;
    Node *q = p->next;
    p->next = p->next->next;
    free(q);
    return 0;
}

int TravelList(List L){
    List p = L;
    while(p){
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
    return 0;
}