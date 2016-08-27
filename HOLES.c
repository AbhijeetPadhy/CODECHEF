#include<stdio.h>
int main()
{
    int T,n,i,j;
    char V[100];
    int A[26]={1,2,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0};

    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        //fflush(stdin);
        //gets(V);
        scanf("%s",V);
        n=0;
        for(j=0;j<strlen(V);j++)
        {

           n+=A[(int)(V[j]-'A')];
        }
        printf("%d\n",n);
    }


    return 0;
}
