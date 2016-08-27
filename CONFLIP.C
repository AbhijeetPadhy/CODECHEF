#include<stdio.h>

int scan(){
int t=0;
char c;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9'){
t=(t<<3)+(t<<1)+c-'0';
c=getchar_unlocked();
}
return(t);
}

int main()
{
    int t,G,I,Q,i,j;
    long long int N,T;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        G=scan();
        for(j=0;j<G;j++)
        {
            I=scan();
            scanf("%lld",&N);
            Q=scan();
            if(I==1&&N%2!=0)
                T=N/2+1;
            else if(I==1&&N%2==0)
                T=N/2;
            else if(I==2&&N%2!=0)
                T=N/2;
            else
                T=N/2;
            if(Q==1)
                printf("%lld\n",N-T);
            else
                printf("%lld\n",T);
        }
    }
    return 0;
}
