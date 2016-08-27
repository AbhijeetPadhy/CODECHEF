#include<stdio.h>

void ms(int A[],int i,int j)
{
	int t,mid;
	if(i==j+1)
	{
		if(A[i]<A[j])
		{
			t=A[i];
			A[i]=A[j];
			A[j]=t;
		}
		return;
	}
	else if(i==j)
		return;
	mid=(i+j)/2;
	ms(A,i,mid-1);
	ms(A,mid,j);
	merge(A,i,mid-1,mid,j);
}

void merge(int A[],int a,int b,int c,int d)
{
	int i,j,k;
	int B[100];
	i=a;
	j=c;
	while(i<=b||j<=d)
	{
		if(A[j]<A[i]&&i<=b&&j<=d)
		{
			B[k]=A[j];
			k++;
			j++;
		}
		else if(A[i]<A[j]&&i<=b&&j<=d)
		{
			B[k]=A[i];
			k++;
			i++;
		}
		else if(i>b)
		{
			B[k]=A[j];
			k++;
			j++;
		}
		else if(j>d)
		{
			B[k]=A[i];
			k++;
			i++;
		}
	}
}

int main(void)
{
	int A[50],i;
	int n;
	printf("Enter the no of elem: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("Elements aftre the sorting are: \n");
	ms(A,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",A[i]);
}
