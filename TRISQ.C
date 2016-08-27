#include<stdio.h>

int main(){
    int T,n;
    int a,i,j;
    double h,rt = 1.414;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&a);
        n=0;
        while(a > 0){
            //printf("%f %f %f %f\n", h, 2*h, 2*h-4, (2*h-4)/2);
            if(a-2 > 0)
                n+=(a-2)/2;
            a-=2;
        }
        printf("%d\n",n);
    }
    return 0;
}