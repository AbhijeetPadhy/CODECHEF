#include<stdio.h>

int main(){
    long int T,i,j,k,x,y,A[100001],B[100001],n,N,M,m1,m2;
    long long int pro;
    scanf("%ld",&T);
    for(i=0;i<T;i++){
        for(j=0;j<100001;j++)
            A[j] = B[j] = 0;
        scanf("%ld %ld",&N,&M);
        for(j=0;j<M;j++){
            scanf("%ld %ld",&m1,&m2);
            if(A[m1] == 0 && A[m2] == 0){
                A[m1] = m1;
                A[m2] = m1;
            }
            else if(A[m1] == 0)
                A[m1] = A[m2];
            else if(A[m2] == 0)
                A[m2] = A[m1];
            else{
                x = A[m1];
                y = A[m2];
                for(k=0;k<=N;k++){
                    if(A[k]==y)
                        A[k]=x;
                }
            }
            //for(k=1;k<=N;k++)
            //    printf("%d ",A[k]);
            //printf("\n");
        }

        for(j=1;j<=N;j++){
            if(A[j] == 0)
                B[j] = 1;
            else{
                B[A[j]]++;
            }
        }
        for(j=1,pro=1,n=0;j<=N;j++){
            if(B[j]!=0){
                pro*=B[j];
                pro = pro%1000000007;
                n++;
            }
        }
        printf("%ld %lld\n",n,pro);
    }
    return 0;
}
