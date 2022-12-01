#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int list[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&list[i]);
    }
    int maximum = 0;
    int thismum = 0;
    for(int m = 0;m<n;m++){
        thismum += list[m];
        if(thismum>maximum){
            maximum = thismum;
        }else{
            if(thismum<0){
                thismum = 0;
            }
        }
    }
    printf("%d",maximum);
}