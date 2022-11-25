#include <stdio.h>


int main(){
    int n = 0;double m=0;

    scanf("%d",&n);
    
    for(int i = 1;i<=n;i++){
        m +=1.0/i;
    }
    
    printf("%.6f",m);
    return 0;
}