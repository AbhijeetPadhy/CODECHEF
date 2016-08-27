#include<stdio.h>
#include<limits.h>
int main(){
    long int T,i,j,a,b,val;
    scanf("%ld",&T);
    for(i=0;i<T;i++){
        a=b=LONG_MIN;
        for(j=0;j<3;j++){
            scanf("%ld",&val);
            if(val>a){
                b = a;
                a = val;
            }  
            else if(val > b)
                b = val;
        }
        printf("%ld\n",b);
        
    }
    return 0;
}