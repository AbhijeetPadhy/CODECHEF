#include<stdio.h>
#include<string.h>

long long int func(int N, int K, int A[1001], char op[4],long long int answer);
int main(){
    int T,N,K,A[1001],i,j;
    long long int answer;
    char op[4];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d %lld",&N,&K,&answer);
        for(j=0;j<N;j++)
            scanf("%d",&A[j]);
        scanf("%s",op);
        printf("%lld\n",func(N,K,A,op,answer));
    }
    return 0;
}
long long int func(int N, int K, int A[1001], char op[4],long long int answer){
    int i,j;
    for(j=0;j<N;j++)
        if(strcmp(op,"AND")==0 && K != 0)
            answer = answer & A[j];
        else if(strcmp(op,"OR")==0 && K != 0)
            answer = answer | A[j];
        else if(strcmp(op,"XOR")==0 && K%2!=0)
            answer = answer ^ A[j];
    return answer;
}
