#include<stdio.h>
void quicksort(int x[][2],long int first,long int last);

int main()
{
    int T,A[100000][2],x,y,max;
    long int N,n,i,j;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%ld",&N);
        n=0;max=0;
        for(j=0;j<N;j++)
            {scanf("%d %d",&A[j][0],&A[j][1]);if(A[j][1]>max)max=A[j][1];}

        quicksort(A,0,N-1);

        x=A[0][0];
        y=A[0][1];

        for(j=0;y<=max;)
        {
            j++;

            if(j==N)
            {
                n++;break;
            }
            if(y<A[j][0])
            {
                n++;
                x=A[j][0];
                y=A[j][1];
            }
            else if(x<=A[j][0]&&y>=A[j][1])
            {
                x=A[j][0];
                y=A[j][1];
            }
            else if(x<=A[j][0]&&y<=A[j][1])
            {
                x=A[j][0];
            }
        }

        printf("%ld\n",n);
    }
    return 0;
}

void quicksort(int x[][2],long int first,long int last)
{
     long int pivot,j,i;
     int temp1,temp2;

     if(first<last)
     {
         pivot=first;
         i=first;
         j=last;

         while(i<j)
         {
             while(x[i][0]<=x[pivot][0]&&i<last)
                 i++;
             while(x[j][0]>x[pivot][0])
                 j--;
             if(i<j)
             {
                 temp1=x[i][0];temp2=x[i][1];
                  x[i][0]=x[j][0];x[i][1]=x[j][1];
                  x[j][0]=temp1;x[j][1]=temp2;
             }
         }

         temp1=x[pivot][0];temp2=x[pivot][1];
         x[pivot][0]=x[j][0];x[pivot][1]=x[j][1];
         x[j][0]=temp1;x[j][1]=temp2;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);
}}
