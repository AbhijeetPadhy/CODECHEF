#include<stdio.h>
#include<math.h>

int power(int A[],int K,int sum)
{
    int a=2,i;
    int sum1,k=0,j,b;
    for(i=1;i<=10;i++)
        a*=2;

    for(i=0;i<a;i++)
    {
        sum1=0;b=0;
        for(j=0;j<11;j++)
        {
            if(i&(1<<j))
            {
                sum1+=A[j];

                b++;
            }
        }

        if(sum==sum1&&b==K)
            k++;
    }
    return k;
}
void sort(int A[])
{
    int i,j,t,temp;

    for(i=0;i<10;i++)
    {
        t=i;
        for(j=i+1;j<11;j++)
            if(A[t]<A[j])
                t=j;
        temp=A[t];
        A[t]=A[i];
        A[i]=temp;
    }
}

int main()
{
    int T,K,A[11],i,j,sum;
    int ans;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        for(j=0;j<11;j++)
            scanf("%d",&A[j]);
        scanf("%d",&K);
        sort(A);

        sum=0;
        for(j=0;j<K;j++)
            sum+=A[j];
        ans=power(A,K,sum);
        printf("%d\n",ans);
    }
    return 0;
}
