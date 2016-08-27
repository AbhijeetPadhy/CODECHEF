#include<stdio.h>

void rev(int a[19],int n)
{
    int i,temp;
    //printf("%d\n",n);
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }

}
int main()
{
    int a[19],sum=0,n,m,b[19],c,i,z,j,d[19],mod;
    char str[20];
    scanf("%s",str);
    for(i=0;;i++)
    {
        if(str[i]=='\0')
            break;
        a[i]=str[i]-'0';
        sum+=a[i];
    }
    n=i;c=0;

    //div
    b[0]=0;
    for(i=0,j=0;i<n;i++)
    {
        c=c*10+a[i];
        if(c<6)
            continue;
        b[j]=c/6;
        c=c%6;
        j++;
    }
    if(n==1)
        j++;
    m=j;

    rev(b,m);
    rev(a,n);

    for(j=m;j<19;j++)
        b[j]=0;
    c=0;
    //mul
    for(j=0;j<m;j++)
    {
        z=b[j]*6;
        z=z+c;
        if(z<10)
        {
            b[j]=z;
            c=0;
        }
        else
        {
            c=z/10;
            b[j]=z%10;
        }
    }

    if(c!=0)
    {
        b[j++]=c%10;
        c=c/10;
        if(c!=0)
        {
            b[j++]=c%10;
            c=c/10;
            if(c!=0)
            {
                b[j++]=c%10;
                c=c/10;
            }
        }
    }
    m=j;

    for(j=m;j<19;j++)
        b[j]=0;

    //sub
    for(i=0;i<m;i++)
    {
        if(a[i]<b[i])
        {
            a[i+1]-=1;
            a[i]+=10;
        }
        d[i]=a[i]-b[i];
    }


    mod=d[0];


    if(sum%3==0 && a[0]%2==0)
        printf("yes");
    else
    {
        if(mod==1 || mod==3)
            printf("yes");
        else
            printf("no");
    }
    return 0;
}
