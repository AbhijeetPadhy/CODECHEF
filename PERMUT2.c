#include<stdio.h>
#include<malloc.h>

int main()
{
//long int n[1000];
long int a[100000];
long int val[1000];
long int b;
long int i,j,c;

for(i=0;;i++)
{
scanf("%ld",&b);
if(b==0)break;
//a=(int*)malloc(b*sizeof(int));
for(j=0;j<b;j++)
scanf("%ld",&a[j]);
val[i]=0;
for(j=0;j<b;j++)
{
c=a[j];
if((j+1)!=a[c-1])
{val[i]=1;break;}
}
if(val[i]==0)
printf("ambiguous\n");
else
printf("not ambiguous\n");
}
return 0;

}
