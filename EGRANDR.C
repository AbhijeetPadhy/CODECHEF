#include<stdio.h>

int main(){
    long int T,N,i,j,sum,max,mark,min;
    double avg;
    scanf("%ld",&T);
    for(i=0;i<T;i++){
        scanf("%ld",&N);
        max = 1;
        min = 10;
        sum = 0;
        for(j=0;j<N;j++){
            scanf("%ld",&mark);
            if(mark>max)
                max = mark;
            if(mark<min)
                min = mark;
            sum += mark;
        }
        avg = (sum*1.0)/N;
        if(max == 5 && avg >= 4 && min>2)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
