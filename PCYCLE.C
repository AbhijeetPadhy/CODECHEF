#include<stdio.h>

int main()
{
    int A[1000],B[1000],N,i,j,f=1,n=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
        B[i]=0;
    }
    while(f!=0)
    {
       n++;
       for(i=0;i<N;i++)
       {
            if(B[i]==0)break;
       }
       j=i;
       j=A[j]-1;

       B[i]=1;
       while(j!=i&&B)
       {
            B[j]=1;
            j=A[j]-1;
       }
       f=0;
       for(i=0;i<N;i++)
            if(B[i]==0)
            {
                f=1;
                break;
            }
    }

    for(i=0;i<N;i++)
        B[i]=0;
    printf("%d\n",n);
    f=1;
    while(f!=0)
    {
       for(i=0;i<N;i++)
       {
            if(B[i]==0)break;
       }
       j=i;
       printf("%d ",j+1);
       j=A[j]-1;

       B[i]=1;
       while(j!=i&&B)
       {
            printf("%d ",j+1);
            B[j]=1;
            j=A[j]-1;
       }
       printf("%d",i+1);
       f=0;
       for(i=0;i<N;i++)
            if(B[i]==0)
            {
                f=1;
                break;
            }
        printf("\n");
    }
    return 0;
}
