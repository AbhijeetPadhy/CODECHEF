#include<stdio.h>

int main()
{
    int A[3][2],T,R,i,j,n;
    long long int a,b,c;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        n=0;
        scanf("%d",&R);
        for(j=0;j<3;j++)
        {
            scanf("%d %d",&A[j][0], &A[j][1]);
        }
        a=(A[1][0]-A[0][0])*(A[1][0]-A[0][0])+(A[1][1]-A[0][1])*(A[1][1]-A[0][1]);
        b=(A[2][0]-A[1][0])*(A[2][0]-A[1][0])+(A[2][1]-A[1][1])*(A[2][1]-A[1][1]);
        c=(A[2][0]-A[0][0])*(A[2][0]-A[0][0])+(A[2][1]-A[0][1])*(A[2][1]-A[0][1]);
        if(a<=R*R)n++;
        if(b<=R*R)n++;
        if(c<=R*R)n++;

        if(n>=2)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
