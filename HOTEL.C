#include<stdio.h>

void quicksort(int x[],int first,int last);

int main()
{
    int T,N,A[100],B[100],i,j,k,max,t;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<N;j++)
            scanf("%d",&A[j]);
        for(j=0;j<N;j++)
            scanf("%d",&B[j]);
        quicksort(A,0,N-1);
        quicksort(B,0,N-1);
        for(j=0,t=0,max=0,k=0;j<N;j++)
        {
            t++;
            for(;B[k]<=A[j];k++,t--);
            if(max<t)max=t;
        }
        printf("%d\n",max);
    }
    return 0;
}

void quicksort(int x[],int first,int last)
{
    int pivot,j,i;
    int temp;

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
