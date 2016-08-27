#include<stdio.h>

int main()
{
    int T,A[10],i,j,loc,min,k,f,min2,loc2;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        k=-1;f=0;
        for(j=0;j<10;j++)
            scanf("%d",&A[j]);
        for(j=0;j<10;j++)
            if(A[j]==0)
            {
                if(j==0)
                    f=1;
                else
                {
                    k=j;
                    break;
                }
            }
        if(k!=-1)
            printf("%d\n",j);
        else if(f==1)
            printf("%d\n",10);
        else
        {
            min=9;loc=-1;
            for(j=0;j<10;j++)
            {
                if(A[j]<min)
                {
                    min=A[j];
                    loc=j;
                }
            }

            min2=9;loc2=-1;
                for(j=1;j<10;j++)
                {
                    if(A[j]<min2)
                    {
                        min2=A[j];
                        loc2=j;
                    }
                }

            if(loc==0&&min2>min)
            {

                printf("%d",1);
                for(j=1;j<=min+1;j++)
                    printf("%d",0);
            }
            else
            {
                if(loc==0)
                    loc=loc2;
                for(j=1;j<=min+1;j++)
                    printf("%d",loc);
                printf("\n");
            }
        }
    }
    return 0;
}
