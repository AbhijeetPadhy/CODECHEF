#include<stdio.h>
#include<string.h>

int main(){
    int T,i,j,n;
    char S[2014];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%s",S);
        n = strlen(S);
        for(j=n-1;j>=0;j--){
            if(j>=3 && (S[j-3]=='C' || S[j-3]=='?') && (S[j-2]=='H' || S[j-2]=='?') && (S[j-1]=='E' || S[j-1]=='?') && (S[j]=='F' || S[j]=='?')){
                S[j-3] = 'C';
                S[j-2] = 'H';
                S[j-1] = 'E';
                S[j] = 'F';
                j-=3;
            }
            else if(S[j] == '?'){
                S[j] = 'A';
            }
        }
        printf("%s\n",S);
    }
    return 0;
}
