#include<stdio.h>
#include<limits.h>

int main(){
    long long int T,N,i,j,a=LONG_MAX,b=LONG_MAX,val;
    scanf("%lld",&T);
    for(i=0;i<T;i++){
        a=LONG_MAX;b=LONG_MAX;
        scanf("%lld",&N);
        for(j=0;j<N;j++){
            scanf("%lld",&val);
            if(val<a){
                b = a;
                a = val;
            }  
            else if(val < b)
                b = val;
        }
        printf("%lld\n",a+b);
    }
    return 0;
}