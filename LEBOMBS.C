#include<stdio.h>

int main()
{
    int T,N,ans=0,i,j;
    char A[1000];

    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        ans=0;
        scanf("%s",A);
        if(N==1)
        {
            if(A[0]=='0')
                ans=1;
        }
        else
        for(j=0;j<N;j++)
        {

            if(j==0)
            {
                if(A[j]=='0'&&A[j+1]=='0')
                    ans++;
            }
            else if(j==N-1)
            {
                if(A[j]=='0'&&A[j-1]=='0')
                    ans++;
            }
            else
                {

                    if(A[j]=='0'&&A[j-1]=='0'&&A[j+1]=='0')
                        ans++;
                }
        }
        printf("%d\n",ans);
    }
    return 0;
}
