#include<stdio.h>
#include<string.h>

int main()
{
    int T, A[52],i,j,sum;
    char S[201];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%s",&S);
        sum=0;
        for(j=0;j<52;j++)
            A[j]=0;
        for(j=0;j<strlen(S);j++)
            if(S[j]>='A'&&S[j]<='Z')
                A[S[j]-'A'+26]++;
            else
                A[S[j]-'a']++;
        for(j=0;j<52;j++)
            if(A[j]%2==0)
                sum=sum+A[j]/2;
            else
                sum=sum+A[j]/2+1;
        printf("%d\n",sum);
    }
    return 0;
}
