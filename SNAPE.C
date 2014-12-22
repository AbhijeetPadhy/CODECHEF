#include<stdio.h>
#include<math.h>
int main()
{
    int T,LS,B,i;
    double RS;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&B,&LS);
        printf("%f %f\n",sqrt(LS*LS-B*B),sqrt(LS*LS+B*B));
    }
    return 0;
}
