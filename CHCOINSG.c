#include<stdio.h>

long long int find(long long int N){
    long long int i,j,pow,count,a;
    if(N <= 5)
        return N;
    while(N>=5){
        if(N==5)
            return N;
        count = 0;
        for(i=2;i<=N;i++){
            if(N%i == 0){
                count++;
                if(count == 1)
                    a = i;
                if(count >=2){
                    pow = 1;
                    for(j=1;j<=count;j++)
                        pow*=a;
                    
                    if(i != pow)
                        break;
                }
            }
            if(i == N){
                return N;
            }
        }
        
        if(N == pow){
            return N;
        }
        N--;
    }
    return 0;
}

int main(){
    long long int T,N,i,a,count;
    scanf("%lld",&T);
    for(i=0;i<T;i++){
        scanf("%lld",&N);
        count = 0;
        while(N){
            a = find(N);
            N-=a;
            count++;
        }
        if(count%2 == 0)
            printf("Misha\n");
        else
            printf("Chef\n");
    }
    return 0;
}
