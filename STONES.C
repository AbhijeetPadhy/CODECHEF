#include<stdio.h>
#include<string.h>

int main()
{
    int T,i,j,k,A[2][52],a;
    char J[101],S[101];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%s",J);
        scanf("%s",S);
        for(j=0;j<52;j++)
            A[0][j]=A[1][j]=0;
        for(j=0;j<strlen(J);j++)
        {
            if(J[j]>='A'&&J[j]<='Z')
                a=J[j]-'A'+26;
            else
                a=J[j]-'a';

            if(A[0][a]==1)
                continue;
            for(k=0;k<strlen(S);k++)
                if(J[j]==S[k])
                    A[1][a]++;
            A[0][a]=1;
        }
        a=0;
        for(j=0;j<52;j++)
            a+=A[1][j];
        printf("%d\n",a);

    }
    return 0;
}
