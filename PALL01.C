#include<stdio.h>

int main(){
    int T,i,a,N1,N2;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&a);
        N1 = a;
        N2 = 0;
        while(a>0){
            N2 = N2*10 + a%10;
            a/=10;
        }
        if(N1 == N2)
            printf("wins\n");
        else
            printf("losses\n");
    }
    return 0;
} 
