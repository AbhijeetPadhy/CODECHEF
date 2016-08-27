#include<stdio.h>

int main(){
    int T,i;
    long int s;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%ld",&s);
        if(s<1500)
            printf("%g\n",s + 0.1*s + 0.9*s);
        else
            printf("%g\n",s+ 500 + 0.98*s);
    }
    return 0;
}
