#include<stdio.h>
#include<string.h>

int main(){
    int T,F1[27],F2[27],ourans,chefans,i,j;
    char A[10000],B[10000];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%s %s",A,B);
        for(j=0;j<26;j++)
            F1[j] = F2[j] = 0;
        for(j=0;j<strlen(A);j++)
            F1[A[j]-'a']++;
        for(j=0;j<strlen(B);j++)
            F2[B[j]-'a']++;
            chefans = 1;
            ourans = 1;
        for(j=0;j<26;j++){
            if((F1[j]!=0 && F2[j]==0)||(F1[j]==0 && F2[j]!=0))
                chefans = 0;
            if(F1[j]!=F2[j])
                ourans = 0;
        }
        if(chefans^ourans)
            printf("NO\n");
        else
            printf("YES\n");

    }
    return 0;
}
