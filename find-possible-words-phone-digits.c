#include<stdio.h>
#include<string.h>

int main(){
    int A[]={0,0,3,3,3,3,3,4,3,4};
    int i,j,num,sum;
    char w[100],z[100];
    scanf("%s",w);
    int n = strlen(w);
    for(i=0;i<n;i++){
        num = w[i] - '0';
        sum = 0;
        for(j=0;j<num;j++)
            sum+=A[j];
        z[i] = 'a'+sum;
    }
    z[i]='\0';
    index = n-1;
    while(1){
        ch = z[index];
        pos = ch-'a'+1;
        num = w[index]-'0';
        for(j=0;j<10;j++){
            sum+=A[j];
            if(sum>=pos)
                break;
        }
        if(pos<sum-1){
            z[index]++;
            printf("%s\n");
        }
        else{
            index--;
            for(j=index+1;j<n;j++){
                sum = 0;
                num = w[i] - '0';
                for(k=0;k<num;k++)
                    sum+=A[k];
                z[j] = 'a'+sum;
            }
    }
    printf("%s",z);
    return 0;
}
