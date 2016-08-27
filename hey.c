#include<stdio.h>
 
int main()
{
int A[500],i,j;
for(i=0;;i++)
{
scanf("%d",&A[i]);
if(A[i]==42)break;
}
i--;
for(j=0;j<=i;j++)
printf("%d\n",A[j]);
 
}
