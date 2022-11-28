#include "Stack_base.h"

int InitStack(SQstack *s){
    s->top =-1;
    return 0;
}

int PushStack(SQstack *s,int elem){
    if(s->top+1>=MAXSIZE){
        printf("this stack is full.\n");
        return 1;
    }
    s->top++;
    int i =s->top;
    s->sqlist[i] = elem;
    printf("OK,%d\n",s->top);
    return 0;
}

int EmptyStack(SQstack *s){
    if(s->top==-1){
        return 0;
    }
    return 1;
}

int PopStack(SQstack *s,int *rt){

    *rt = s->sqlist[s->top];
    s->top--;
    printf("now the top is %d",s->top);
    return 0;
}

int TravelStack(SQstack s){
    for(int i = 0;i<s.top+1;i++){
        printf("%d\n",s.sqlist[i]);
    }
    return 0;
}