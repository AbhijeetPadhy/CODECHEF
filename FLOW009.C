#include<stdio.h>

int main(){
    int T,i;
    long int Q,P;
    double exp;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%ld %ld",&Q,&P);
        if(Q>1000)
            printf("%lf\n",0.9*Q*P);
        else
            printf("%lf\n",1.0*Q*P);
    }
    return 0;
}
