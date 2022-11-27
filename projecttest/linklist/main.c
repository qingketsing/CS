#include "LL_base.c"
int main(){
    Lnode *L = Initlist();
    int i = 0;
    while(i<10){
        insertnode(L,i,i);
        i++;
    }
    checkelem(L,2);
    Travellist(L);
}