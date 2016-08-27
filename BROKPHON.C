#include<stdio.h>

int main(){
    long long int T,i,j,flag,ans,prev,cur,n;
    scanf("%lld",&T);
    for(i=0;i<T;i++){
        scanf("%lld",&n);
        ans = 0;
        scanf("%lld",&prev);
        flag = 0;
        for(j=1;j<n;j++){
            scanf("%lld",&cur);
            if(prev != cur){
                if(flag == 1)
                    ans++;
                else{
                    ans+=2;
                    flag=1;
                }
            }
            else
                flag = 0;
            prev = cur;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
