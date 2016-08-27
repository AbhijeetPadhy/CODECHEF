#include<stdio.h>

int main(){
    int T,i,a,c,j;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&a);
        c=0;
        for(j=1;j<=a;j++)
            if(a%j == 0)
                c++;
        if(c == 2)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}