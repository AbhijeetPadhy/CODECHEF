#include<stdio.h>

int main(){
    int T,HH1,MM1,HH2,MM2,dist,i,diff;
    double ans1,ans2;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d:%d",&HH1,&MM1);
        scanf("%d:%d",&HH2,&MM2);
        scanf("%d",&dist);
        diff = (HH1*60 + MM1) - (HH2*60 + MM2);
        ans1 = diff + dist;
        if(diff > 2*dist)
            ans2 = diff;
        else if(dist<=diff && diff<=2*dist)
            ans2 = dist + diff-dist + (2*dist - diff)/2.0;
        else if(diff<dist)
            ans2 = dist + diff/2.0;
        printf("%.1lf %.1lf\n",ans1,ans2);
    }
    return 0;
}
