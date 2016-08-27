#include<stdio.h>
#include<math.h>

void merge(int arr[], int brr[], int l, int m, int r);
void mergeSort(int arr[], int brr[], int l, int r);
void mS(int arr[], int l, int r);
void mg(int arr[], int l, int m, int r);


int main()
{
    register int i;
    int t;
    register long int j,k;
    long int n;
    register double sum;
    int A[100000],B[100000],C[100000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        getchar();
        scanf("%ld",&n);
        for(j=0;j<n;j++)
            scanf("%d %d",&A[j],&B[j]);
        mergeSort(A,B,0,n-1);

        for(j=0,k=0;j<n;)
        {
            for(k=j;k<n;k++)
            {
                if(A[j]!=A[k])
                    break;
            }
            if(j!=k)
                mS(B,j,k-1);
            j=k;
        }

        for(j=0;j<n-1;j++)
            sum+=sqrt((A[j+1]-A[j])*(A[j+1]-A[j])+(B[j+1]-B[j])*(B[j+1]-B[j]));
        printf("%.2f\n",sum);

    }

    return 0;
}









void mergeSort(int arr[], int brr[], int l, int r)
{
   if (l < r)
   {
      int m = (l+r)/2;
      mergeSort(arr, brr, l, m);
      mergeSort(arr, brr, m+1, r);
      merge(arr, brr, l, m, r);
   }
}

void merge(int arr[], int brr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int La[n1], Ra[n2];
    int Lb[n1], Rb[n2];

    for (i = 0; i < n1; i++)
    {
        La[i] = arr[l + i];
        Lb[i] = brr[l + i];
    }

    for (j = 0; j < n2; j++)
    {
        Ra[j] = arr[m + 1+ j];
        Rb[j] = brr[m + 1+ j];
    }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (La[i] <= Ra[j])
        {
            arr[k] = La[i];
            brr[k] = Lb[i];
            i++;
        }
        else
        {
            arr[k] = Ra[j];
            brr[k] = Rb[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = La[i];
        brr[k] = Lb[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = Ra[j];
        brr[k] = Rb[j];
        j++;
        k++;
    }
}













void mS(int arr[], int l, int r)
{
   if (l < r)
   {
      int m = (l+r)/2;
      mS(arr, l, m);
      mS(arr, m+1, r);
      mg(arr, l, m, r);
   }
}

void mg(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int La[n1], Ra[n2];

    for (i = 0; i < n1; i++)
    {
        La[i] = arr[l + i];
    }

    for (j = 0; j < n2; j++)
    {
        Ra[j] = arr[m + 1+ j];
    }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (La[i] >= Ra[j])
        {
            arr[k] = La[i];
            i++;
        }
        else
        {
            arr[k] = Ra[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = La[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = Ra[j];
        j++;
        k++;
    }
}
