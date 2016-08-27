 
#include<stdio.h>

int main(){
    int T,n;
    int a,i,j;
    double h,rt = 1.414;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&a);
        
        printf("%d\n",(int)(0.5*a*a)/4);
    }
    return 0;
}