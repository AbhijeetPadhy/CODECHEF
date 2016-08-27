#include<stdio.h>

int main()
{
    int T,N,M,i,j,flag,min,print=0,m,p;
    int NN[1000][3],MM[1000][2];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&N,&M);
        print=0;
        for(j=0;j<N;j++)
        {
            scanf("%d",&NN[j][0]);
            NN[j][1]=NN[j][2]=0;
        }
        for(j=0;j<M;j++)
        {
            scanf("%d %d",&MM[j][0],&MM[j][1]);
        }
        while(1)
        {
            printf("hello\n");
            for(j=0;j<M;j++)
            {
                NN[MM[j][0]-1][1]+=NN[MM[j][1]-1][0];
                if(NN[MM[j][1]-1][0]!=0)
                    NN[MM[j][0]-1][2]++;
                NN[MM[j][1]-1][1]+=NN[MM[j][0]-1][0];
                if(NN[MM[j][0]-1][0]!=0)
                    NN[MM[j][1]-1][2]++;
            }
            flag=1;
            for(j=0;j<N;j++)
            {
                if(NN[j][2]!=0);
                {flag=0;break;}
            }
            if(flag==0)
                break;
            min=NN[0][1];m=0;p=NN[0][2];
            for(j=0;j<N;j++)
            {
                if(NN[j][1]<min)
                    {min=NN[j][1];m=j;}
                else if(NN[j][1]==min && NN[j][2]<p)
                    {m=j;}
            }
            print+=min;
            NN[m][0]=0;

        }
        printf("%d\n",print);
    }

}
