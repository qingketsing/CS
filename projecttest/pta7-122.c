#include <stdio.h>
int main(){
    int n= 0;int flag = 0;
    scanf("%d",&n);
    if(n==1){
        printf("0");
    }
    else{
        int flag = 0;
        while(n!=1){
            if(n%2==1){
               n = 3*n+1;
                flag++; 
            }else{
                n = n/2;
                flag++;
            }
        }
        printf("%d",flag);
    }
    return 0;
}