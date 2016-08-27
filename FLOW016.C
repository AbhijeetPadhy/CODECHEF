#include<stdio.h>

long int gcd(long int a, long int b){
    if(b%a == 0)
        return a;
    else
        return gcd(b%a,a);
}

int main(){
    int T,i;
    long int a,b,g;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%ld %ld",&a,&b);
        g = gcd(a,b);
        printf("%ld %ld\n",g,a*b/g);
    }
    return 0;
}
