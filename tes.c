#include <stdio.h>

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
    int T,N,n,i,j;
    int A[10000];
    T=scan();
    for(i=0;i<T;i++)
    {
        N=scan();
        n=1;
        A[0]=scan();
        for(j=1;j<N;j++)
        {
            A[j]=scan();
            if(A[j]>A[j-1])
                A[j]=A[j-1];
            else
                n++;
        }
        printf("%d\n",n);
    }
    return 0;
}
