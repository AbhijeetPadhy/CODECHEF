#include<stdio.h>
#include<limits.h>

long long int abs(long int a){
    if(a<0)
        return -a;
    return a;
}

int main(){
    int N,i,s,x1,x2,x3,y1,y2,y3;
    long long int minarea=ULONG_MAX,maxarea=-1,minindex,maxindex,area;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
        area = abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
        if(area<minarea){
            minarea = area;
            minindex = i+1;
        }
        if(area>maxarea){
            maxarea = area;
            maxindex = i+1;
        }
        //printf("+%ld\n",area);
    }
    printf("%lld %lld",minindex,maxindex);
    return 0;
}
