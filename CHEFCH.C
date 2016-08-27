#include<stdio.h>
#include<string.h>

int main()
{
    long long int T,i,j,emp,omp,epm,opm,t,r,max;
    char A[100001];
    scanf("%lld",&T);
    for(j=0;j<T;j++)
    {
        emp=omp=epm=opm=t=0;
        scanf("%s",A);
        r=strlen(A);
        for(i=0;i+1<strlen(A);i+=2)
        {
            if(A[i]=='+'&&A[i+1]=='-')
                epm++;
            if(A[i]=='-'&&A[i+1]=='+')
                emp++;
        }
        for(i=1;i+1<strlen(A);i+=2)
        {
            if(A[i]=='+'&&A[i+1]=='-')
                opm++;
            if(A[i]=='-'&&A[i+1]=='+')
                omp++;
        }
        max=emp;
        if(max<omp)max=omp;
        if(max<epm)max=epm;
        if(max<opm)max=opm;

        ///////
        if(max==emp)
            {for(i=0,t=0;i<strlen(A);i++)
                {
                    if(i%2==0&&A[i]!='-')
                        t++;
                    if(i%2!=0&&A[i]!='+')
                        t++;
                }
            if(t<r)r=t;}
        ///////
        if(max==epm)
            {for(i=0,t=0;i<strlen(A);i++)
                {
                    if(i%2==0&&A[i]!='+')
                        t++;
                    if(i%2!=0&&A[i]!='-')
                        t++;
                }
            //printf("t=%d",t);
            if(t<r)r=t;}

        ///////
        if(max==omp)
            {for(i=t=0;i<strlen(A);i++)
                {
                    if(i%2==0&&A[i]!='+')
                        t++;
                    if(i%2!=0&&A[i]!='-')
                        t++;
                }
        if(t<r)r=t;}

        ///////
        if(max==emp)
            {for(i=t=0;i<strlen(A);i++)
                {
                    if(i%2==0&&A[i]!='-')
                        t++;
                    if(i%2!=0&&A[i]!='+')
                        t++;
                }
        if(t<r)r=t;}
        if(strlen(A)==1)r=0;
        printf("%lld\n",r);
    }
    return 0;
}
