#include<stdio.h>

int main(){
    int T;
    long long int a,b,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%lld %lld",&a,&b);
        if(a>b)
            printf(">\n");
        else if(a == b)
            printf("=\n");
        else 
            printf("<\n");
    }
    return 0;
}
