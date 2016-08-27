#include<stdio.h>

int main()
{
    int T,m,n,i,j,e,f;
    int A[1000],B[1000];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&n,&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&A[j]);
        }

        for(j=0;j<n;j++)
                B[j]=1;
        for(j=0;j<m;j++)
            B[A[j]-1]=0;

        for(j=0,e=0;j<n;j++)
            {
                if(B[j]!=0)
                {
                    e++;
                    if(e%2!=0)
                        printf("%d ",j+1);
                }
            }
        printf("\n");
        for(j=0,e=0;j<n;j++)
            {
                if(B[j]!=0)
                {
                    e++;
                    if(e%2==0)
                        printf("%d ",j+1);
                }
            }
        printf("\n");
    }
    printf("\n");
}
