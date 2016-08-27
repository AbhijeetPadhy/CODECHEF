#include<stdio.h>
#include<string.h>

int main()
{
    int A[2][26],T,i,j,n,f=1;
    char S[1001];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%s",S);
        n=strlen(S);
        //printf("%d",n);
        f=1;
        for(j=0;j<26;j++)
            A[0][j]=A[1][j]=0;

        for(j=0;j<n/2;j++)
        {
            A[0][S[j]-'a']++;
            A[1][S[n-j-1]-'a']++;
        }

        for(j=0;j<26;j++)
        {

            if(A[0][j]!=A[1][j])
            {
                f=0;
                break;
            }
        }
        if(f==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
