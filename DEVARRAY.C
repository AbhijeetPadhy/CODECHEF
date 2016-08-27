#include<stdio.h> 

int main(){
    long int N,Q,i;
    long long int A,t,min,max;
    scanf("%ld %ld",&N,&Q);
    for(i=0;i<N;i++){
        scanf("%lld",&A);
        if(i == 0){
            max = A;
            min = A;
        }
        if(A>max)
            max = A;
        if(A<min)
            min = A;
    }
    for(i=0;i<Q;i++){
        scanf("%lld",&t);
        if(min<=t && t<=max)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}