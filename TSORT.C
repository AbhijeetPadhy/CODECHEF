#include<stdio.h>

void quicksort(long long int x[],int first,int last);

int main()
{
	long long int T,i,N[1000000],j;
	scanf("%lld",&T);
	for(i=0;i<T;i++)
	{
		scanf("%lld",&N[i]);
	}
	quicksort(N,0,T-1);
	for(i=0;i<T;i++)
	{
		printf("%lld\n",N[i]);
	}
	return 0;
}

void quicksort(long long int x[],int first,int last)
{
    int pivot,j,i;
    long long temp;

     if(first<last)
     {
         pivot=first;
         i=first;
         j=last;

         while(i<j)
         {
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j)
             {
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
	
	
