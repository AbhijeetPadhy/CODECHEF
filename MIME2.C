#include<stdio.h>
#include<string.h>

int main(){
    int N,Q,i,index,j,flag;
    char A[101][20], B[101][60],C[60],ext[20];
    scanf("%d %d",&N,&Q);
    for(i=0;i<N;i++)
        scanf("%s %s", A[i],B[i]);
    for(i=0;i<Q;i++){
        scanf("%s",C);
        index = -1;
        for(j=0;j<strlen(C);j++)
            if(C[j] == '.')
                index = j;
        if(index == -1)
            printf("unknown\n");
        else{
            for(j=index+1;j<=strlen(C);j++)
                ext[j-index-1] = C[j];
            flag = 0;
            for(j=0;j<N;j++)
                if(strcmp(A[j],ext) == 0){
                    flag = 1;
                    break;
                }
            if(flag == 1)
                printf("%s\n",B[j]);
            else
                printf("unknown\n");
        }
    }
    return 0;
}
