#include<stdio.h>

int main()
{
    int T,a,i,j;
    char S[1000];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%s",S);
        a=0;
        for(j=0;S[j]!='\0';j++)
            a+=S[j]-'a'+1;
        printf("%d\n",a);
    }
    return 0;
}
