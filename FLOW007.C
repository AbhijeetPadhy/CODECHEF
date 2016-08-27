#include<stdio.h>
#include<string.h>

int main(){
    int T;
    register int i,sum;
    char str[100000];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%s",str);
        sum=0;
        sum += str[0] -'0';
        sum += str[strlen(str)-1] -'0';
        printf("%d\n",sum);
    }
    return 0;
}