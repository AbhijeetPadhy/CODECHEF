#include<stdio.h>

int main()
{
    int T,K,i,j,b;
    char a;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&K);
        b=K/25;
        if(K%25==0)b--;
        a='a'+(K%26+b)%26;
        //printf("%c\n",a);
        for(j=0;j<=K+b;j++)
        {
            printf("%c",a);
            if(a=='a')
                a='z';
            else
                a--;
        }
        printf("\n");
    }
    return 0;
}
