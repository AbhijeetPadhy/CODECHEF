#include<stdio.h>

int main(){
    int TT,N,W,C[200],P[200],T[200],max=-1,i,j,k,pow,timesum,pointsum;
    scanf("%d",&TT);
    for(i=0;i<TT;i++){
        scanf("%d %d",&N,&W);
        max = -1;
        for(j=0;j<N;j++){
            scanf("%d %d %d",&C[j],&P[j],&T[j]);
        }
        pow = 1;
        for(j=0;j<N;j++)
            pow*=2;


        for(j=0;j<pow;j++){
            timesum = 0;
            pointsum=0;
            for(k=0;k<N;k++){
                if((j & 1<<k) != 0){
                    timesum += T[k];
                    pointsum += C[k]*P[k];
                }
                if(timesum > W){
                    break;
                }
            }
            if(timesum<=W && pointsum>max)
                max = pointsum;
        }
        printf("%d\n",max);
    }
    return 0;
}
