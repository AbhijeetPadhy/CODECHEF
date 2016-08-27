#include<stdio.h>

int main(){
    int T,N,i,sum;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&N);
        sum=0;
        while(N>0){
            sum+=N%10;
            N/=10;
        }
        printf("%d\n",sum);
    }
    return 0;
}