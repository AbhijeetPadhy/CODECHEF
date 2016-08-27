#include<stdio.h>
#include<string.h>
int main()
{
    long int T,i,j,ans;
    int A[8][3]={{0,4,2},{0,4,3},{0,5,2},{0,5,3},  {1,4,2},{1,4,3},{1,5,2},{1,5,3}};
    char S[6][10];
    scanf("%ld",&T);
    for(i=0;i<T;i++)
    {
        ans=0;
        for(j=0;j<6;j++)
            scanf("%s",S[j]);
        for(j=0;j<8;j++)
        {
            if(strcmp(S[A[j][0]],S[A[j][1]])==0 && strcmp(S[A[j][1]],S[A[j][2]])==0)
                {
                    ans=1;
                    break;
                }
        }
        if(ans==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
