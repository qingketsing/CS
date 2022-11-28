#include "Stack_base.c"

int main(){
    SQstack S;
    int rt = 0;
    InitStack(&S);
    for(int m = 0;m<10;m++){
        PushStack(&S,m);
        
    }
    TravelStack(S);
    PopStack(&S,&rt);
    printf("the element you delete just now was %d\n",rt);
    TravelStack(S);
}