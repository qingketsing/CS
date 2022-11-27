#include "LL_base.h"

Lnode * Initlist(void){
    Lnode *p = (Lnode *)malloc(sizeof(Lnode));
    p->next = NULL;
    return p;
}

int insertnode(Lnode *L,int n,int elemdata){
    Lnode *p = L;
    int j = 0;
    while(p&&j<n-1){
        p =p->next;
        j++;
    }
    Lnode *s = (Lnode *)malloc(sizeof(Lnode));
    s->data = elemdata;
    s->next = p->next;
    p->next = s;
    return 0;
}

int checkelem(Lnode *L,int elem){
    Lnode *p = L;
    int j = 0;
    while(p){
        int i = p->data;
        if(i==elem){
            printf("This elem is at NO.%d.\n",j);
            return 0;
        }else{
            j++;
            p = p->next;
        }
    }
    printf("we cant find this elem.\n");
    return 1;
}

int Travellist(Lnode *L){
    Lnode *p = L;
    while(p){
        printf("%d\n",p->data);
        p = p->next;
    }
    return 0;
}
