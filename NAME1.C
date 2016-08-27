#include<stdio.h>
#include<string.h>

int isAlpha(char ch){
    if((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z'))
        return 1;
    else
        return 0;
}

int main(){
    int A[150];
    int T,i,flag,j,n;
    char ch;
    scanf("%d",&T);

    for(i=0;i<T;i++){
        for(j=0;j<150;j++)
            A[j] = 0;
        flag = 0;
        while(1){
                ch = getchar();
                if(isAlpha(ch))
                   break;
            }
        while(1){
            if(isAlpha(ch))
                A[ch]++;
            else
                flag++;
            if(flag >= 2)
                break;
            ch = getchar();
        }
        scanf("%d",&n);
        flag = 0;
        while(1){
                ch = getchar();
                if(isAlpha(ch))
                   break;
            }
        while(1){

            if(isAlpha(ch))
                A[ch]--;
            else
                flag++;
            if(flag >= n)
                break;
            ch = getchar();
        }
        flag = 1;
        for(j=0;j<150;j++)
            if(A[j]<0){
                flag = 0;
                break;
            }
        if(flag == 0)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
