#include<stdio.h>

long int mod(long int a)
{
    if (a>0)
        return a;
    else return -a;
}

int main()
{
    long int A,B,w=0,l=-1;
    long int n,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld %ld",&A,&B);
        if(mod(A-B)>l)
        {
            if(A>B)
                w=1;
            else
                w=2;
            l=mod(A-B);
        }
    }
    printf("%ld %ld\n",w,l);
    return 0;
}


