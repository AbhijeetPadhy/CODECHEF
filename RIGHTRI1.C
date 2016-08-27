#include<stdio.h>

int main()
{
    long int N,n=0,i;
    int a,b;
    int x1[100000];
    int x2[100000];
    int x3[100000];
    int y1[100000];
    int y2[100000];
    int y3[100000];
    int s1,s2,s3;

    scanf("%ld",&N);
    for(i=0;i<N;i++)
        scanf("%d %d %d %d %d %d",&x1[i],&y1[i],&x2[i],&y2[i],&x3[i],&y3[i]);
    for(i=0;i<N;i++)
    {
        s1=(y2[i]-y1[i])*(y2[i]-y1[i])+(x2[i]-x1[i])*(x2[i]-x1[i]);
        s2=(y2[i]-y3[i])*(y2[i]-y3[i])+(x2[i]-x3[i])*(x2[i]-x3[i]);
        s3=(y3[i]-y1[i])*(y3[i]-y1[i])+(x3[i]-x1[i])*(x3[i]-x1[i]);

        if(s1+s2==s3||s1+s3==s2||s2+s3==s1)
            n++;
    }
    printf("%ld",n);
    return 0;
}
