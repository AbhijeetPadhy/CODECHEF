#include<stdio.h>

void quicksort(long long int x[],int first,int last);

int main()
{
    int T,N,i,j,k;
    long long int S[5000],diff,a;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);diff=0;
        for(j=0;j<N;j++)
        {
            scanf("%lld",&S[j]);
        }

        quicksort(S,0,N-1);
        diff=S[1]-S[0];
        for(j=1;j<N;j++)
        {
        	if(S[j]-S[j-1]<diff)
        		diff=S[j]-S[j-1];
        }
        printf("%lld\n",diff);

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
