#include<stdio.h>
long long int Com(long long int D,long long int j)
{
    long long int p1=1,p2=1;
    if(D-j<j)
        j=D-j;

    for(;j>0;j--,D--)
    {

        p1*=D;
        p2*=j;
    }

    return p1/p2;
}

long long int Pow(long long int C,long long int j)
{
    long long int pro=1;
    while(j--)
        pro*=C;
    return pro;
}
int main()
{
    long long int T,L,D,S,C,i,j,k,Dsum;
    scanf("%lld",&T);

    for(i=0;i<T;i++)
    {
        Dsum=0;
        scanf("%lld %lld %lld %lld",&L,&D,&S,&C);
        for(j=0;j<D;j++)
        {
            //printf("%lldSC^%lld\n",Com(D,j),j);
            Dsum+=Com(D-1,j)*S*Pow(C,j);
            if(Dsum>=L)
                break;
        }
        //printf("%lld %lld\n",Dsum,L);
        if(Dsum>=L)
            printf("ALIVE AND KICKING\n");
        else
            printf("DEAD AND ROTTING\n");
    }

    return 0;
}
