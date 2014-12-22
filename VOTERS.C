#include<stdio.h>

int main()
{
    long int N1,N2,N3,i,j,k,N;
    int n1[50000],n2[50000],n3[50000],M[150000],a,n;
    scanf("%ld %ld %ld",&N1,&N2,&N3);
    for(i=0;i<N1;i++)
        scanf("%d",&n1[i]);
    for(i=0;i<N2;i++)
        scanf("%d",&n2[i]);
    for(i=0;i<N3;i++)
        scanf("%d",&n3[i]);
    i=j=k=0;N=0;
    while(1)
    {
        if(i<N1)
            a=n1[i];
        else if(j<N2)
            a=n2[j];
        else if(k<N3)
            a=n3[k];
        if(n2[j]<a&&j<N2)
            a=n2[j];
        if(n3[k]<a&&k<N3)
            a=n3[k];
        n=0;
        if(a==n1[i]&&i<N1)
        {i++;n++;}
        if(a==n2[j]&&j<N2)
        {j++;n++;}
        if(a==n3[k]&&k<N3)
        {k++;n++;}
        if(n>=2)
            M[N++]=a;

        if(i==N1&&j==N2&&k==N3)
            break;
    }
    printf("%ld\n",N);
    for(i=0;i<N;i++)
        printf("%d\n",M[i]);

    return 0;
}
