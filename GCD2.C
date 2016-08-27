#include<stdio.h>
#include<string.h>

long long int gcd(long long int a, long long int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}


int main()
{
    int T,i,j=0;
    long long int a,b;
    char A[252];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        j=0;
        scanf("%lld %s",&a,A);
        b=A[j]-'0';
        if(a!=0)
            while(1)
            {

                if(a<b)
                    b=b%a;
                else
                {
                    j++;
                    if(j==strlen(A))
                        break;
                    b=b*10+A[j]-'0';
                    b=b%a;
                }
            }
        if(a==0)
            printf("%s\n",A);
        else
            printf("%lld\n",gcd(a,b));

    }
    return 0;
}
