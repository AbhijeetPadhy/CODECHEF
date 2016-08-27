#include<stdio.h>

int main()
{
    long int N,n=0,i;
    int a,b;
    int x1[100000];
    int x2[100000];
    int x3[100000];
    int y1[100000];
    int y2[100000];
    int y3[100000];
    int s1,s2,s3;

    scanf("%ld",&N);
    for(i=0;i<N;i++)
        scanf("%d %d %d %d %d %d",&x1[i],&y1[i],&x2[i],&y2[i],&x3[i],&y3[i]);

    for(i=0;i<N;i++)
    {
        s1=s2=s3=1;
        //s1
        a=y2[i]-y1[i];
        b=x2[i]-x1[i];
        if(b==0)
            s1=-1;
        else if(a==0)
            s1=0;

        //s2
        a=y3[i]-y1[i];
        b=x3[i]-x1[i];
        if(b==0)
            s2=-1;
        else if(a==0)
            s2=0;

        //s3
        a=y3[i]-y2[i];
        b=x3[i]-x2[i];
        if(b==0)
            s3=-1;
        else if(a==0)
            s3=0;
        if(s1==-1||s2==-1||s3==-1)
        {
            if(s1==0||s2==0||s3==0)
            {
                n++;
                continue;
            }
        }

        if(s1==0||s1==-1)
            if(((y3[i]-y1[i])*(y3[i]-y2[i]))%((x3[i]-x1[i])*(x3[i]-x2[i]))==0)
                if((int)((y3[i]-y1[i])*(y3[i]-y2[i]))/((x3[i]-x1[i])*(x3[i]-x2[i]))==-1)
                {
                    n++;
                    continue;
                }
        if(s2==0||s2==-1)
            if(((y2[i]-y1[i])*(y3[i]-y2[i]))%((x2[i]-x1[i])*(x3[i]-x2[i]))==0)
                if((int)((y2[i]-y1[i])*(y3[i]-y2[i]))/((x2[i]-x1[i])*(x3[i]-x2[i]))==-1)
                {
                    n++;
                    continue;
                }
        if(s3==0||s2==-1)
            if(((y2[i]-y1[i])*(y3[i]-y1[i]))%((x2[i]-x1[i])*(x3[i]-x1[i]))==0)
                if((int)((y2[i]-y1[i])*(y3[i]-y1[i]))/((x2[i]-x1[i])*(x3[i]-x1[i]))==-1)
                {
                    n++;
                    continue;
                }

        if(s1==0||s2==0||s3==0)
            continue;
        //first check
        if(((y2[i]-y1[i])*(y3[i]-y1[i]))%((x2[i]-x1[i])*(x3[i]-x1[i]))==0)
            if((int)((y2[i]-y1[i])*(y3[i]-y1[i]))/((x2[i]-x1[i])*(x3[i]-x1[i]))==-1)
            {
                n++;
                continue;
            }
        //second check
        if(((y3[i]-y1[i])*(y3[i]-y2[i]))%((x3[i]-x1[i])*(x3[i]-x2[i]))==0)
            if((int)((y3[i]-y1[i])*(y3[i]-y2[i]))/((x3[i]-x1[i])*(x3[i]-x2[i]))==-1)
            {
                n++;
                continue;
            }
        //third check
        if(((y2[i]-y1[i])*(y3[i]-y2[i]))%((x2[i]-x1[i])*(x3[i]-x2[i]))==0)
            if((int)((y2[i]-y1[i])*(y3[i]-y2[i]))/((x2[i]-x1[i])*(x3[i]-x2[i]))==-1)
            {
                n++;
                continue;
            }

    }

    printf("%ld",n);
}
