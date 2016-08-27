#include<stdio.h>
int main(){
    long int T,i,sum;
    char ch;
    scanf("%ld",&T);
    
    for(i=0;i<T;i++){
        sum=0;
        while( ( ch = getchar() ) == '\n' );
        while(1){
            if(ch == '\n')
                break;
            if(ch == '4')
                sum++;
            ch = getchar();
        }
        printf("%ld\n",sum);
    }
}