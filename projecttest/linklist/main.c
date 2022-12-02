#include <stdio.h>
#include "List_base.c"

int main(){
    List L = (List)malloc(sizeof(Node));
    L->next = NULL;
    for(int i = 1;i<10;i++){
        InsertList(L,i,i);
    }
    TravelList(L);
    int length = Getlength(L);
    printf("the length of this list is %d\n",length);
    CheckList(L,5);
    int rt= 0;
    DeleteElem(L,4,&rt);
    printf("the element you delete just now is %d\n",rt);
    TravelList(L);
    return 0;
}