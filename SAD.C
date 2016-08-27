#include<stdio.h>

int main(){
    int T,R,C,i,j,k,l,flag;
    long long int max,min,A[100][100];
    //scanf("%d",&T);
    //for(i=0;i<T;i++){
        scanf("%d %d",&R,&C);
        for(j=0;j<R;j++)
            for(k=0;k<C;k++)
                scanf("%lld",&A[j][k]);
        flag =0;
        for(j=0;j<R;j++){
            min = A[j][0];
            for(k=0;k<C;k++)
                if(A[j][k]<min)
                    min = A[j][k];
            flag = 0;
            for(k=0;k<C;k++){
                flag = 0;
                if(A[j][k] == min){
                    max = A[j][k];
                    flag = 1;
                    for(l=0;l<R;l++){
                        if(A[l][k]>max){
                            flag=0;
                            break;
                        }
                    }
                }
                if(flag == 1){
                    break;
                }
            }
            if(flag == 1)
                break;
        }
        if(flag == 1){
            printf("%lld\n",A[j][k]);
        }
        else
            printf("GUESS\n");

    //}
    return 0;
}
