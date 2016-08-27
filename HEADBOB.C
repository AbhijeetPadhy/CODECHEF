#include<stdio.h>
#include<string.h>

int main(){
    int T,t,a,b,c,j,i,N;
    char A[10000],ch;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        a=b=c=0;
        scanf("%d",&N);
        scanf("%s",A);
        for(j=0;j<N;j++){
            ch = A[j];
            if(ch == 'Y' || ch == 'y')
                a++;
            else if(ch == 'N' || ch == 'n')
                b++;
            else if(ch == 'I' || ch == 'i')
                c++;
        }
        if((a>0 && c>0)||(a==0 && c==0))
            printf("NOT SURE\n");
        else if(a>0)
            printf("NOT INDIAN\n");
        else if(c>0)
            printf("INDIAN\n");
    }
    return 0;
}
