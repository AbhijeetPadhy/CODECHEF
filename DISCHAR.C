#include<stdio.h>

int main(){
    int T,i,A[26],j,count;
    char ch;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        for(j=0;j<26;j++)
            A[j] = 0;
        while((ch = getchar()) == '\n')
            ;
        while(ch !='\n'){
            A[ch-'a']++;
            ch = getchar();
        }
        count = 0;
        for(j=0;j<26;j++){
            //printf("%d ",A[j]);
            if(A[j]>0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
