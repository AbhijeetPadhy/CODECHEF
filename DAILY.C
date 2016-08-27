#include<stdio.h>
int C(int free,int X){
    int pro1=1,pro2=1;
    while(X>=1){
        pro1 *= free;
        pro2 *= X;
        free--;
        X--;
    }
    return pro1/pro2;
}
int main(){
    int X,N,free,i,j,sum,book;
    char A[55];
    scanf("%d %d",&X,&N);
    sum = 0;
    for(i=0;i<N;i++){
        scanf("%s",A);
        for(j=0;j<9;j++){
            book = A[j*4+0] - '0'+ 
                    A[j*4+1] - '0'+
                    A[j*4+2] - '0'+
                    A[j*4+3] - '0'+
                    A[54-j*2-1] - '0'+
                    A[54-j*2-2] - '0';
            free = 6 - book;
            if(X<=free){
                sum += C(free,X);
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
