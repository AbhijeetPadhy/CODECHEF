#include<stdio.h>
int main(){
    int T,A,B,f,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d",&A,&B);
        if(A%2 !=0 && B%2!=0)
            printf("Vanka\n");
         else
            printf("Tuzik\n");
    }
    return 0;
}
