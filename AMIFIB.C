#include<stdio.h>
#include<string.h>

int main(){
    long long int T,F[5001],j,i,flag,a;
    char A[5001];
    F[0] = 0;
    F[1] = 1;
    for(i=2;i<5001;i++){
        F[i] = F[i-1] +F[i-2];
    }

    scanf("%lld",&T);
    for(i=0;i<T;i++){
        scanf("%s",A);
        a=0;
        for(j=0;j<strlen(A);j++){
            a=a*10 + (A[j]-'0');
        }
        flag = 0;
        for(j=0;j<5001;j++){
            if(a == F[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
