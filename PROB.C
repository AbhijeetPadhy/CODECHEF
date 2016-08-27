#include<stdio.h>

long long int C(long long int a,long long int b){
    long long int pro1=a,pro2=b;
    while(b>1){
        pro1*=--a;
        pro2*=--b;
    }
    return pro1/pro2;
}

int main(){
    long long int T,i,a,b,c,d;
    double ans;
    scanf("%lld",&T);
    for(i=0;i<T;i++){
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if(d<a+b)
            ans = a*1.0/(a+b);
        else
            ans = (1-(C(c,d-a-b)*1.0)/C(a+b+c,d))*a*1.0/(a+b);
        printf("%lf\n",ans);
    }
    return 0;
}
