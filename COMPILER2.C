#include<stdio.h>
#include<string.h>

int main(){
  long int T,i,j,top,maxcount=0,count,flag;
  char A[1000009];
  scanf("%ld",&T);
  for (i = 0; i < T; i++) {
    maxcount = 0;
    top = -1;
    count = 0;
    scanf("%s",A);
    flag = 1;
    for(j=0;j<strlen(A);j++){
    flag=1;
        if(A[j] == '<'){
            ++top;
            ++count;
        }
        else if(A[j] == '>'){
            if(top>=0){
                top--;
                count++;
            }
            else{
                top = -1;
                flag = 0;
            }
        }
        if(top == -1){
            if(count>maxcount)
                maxcount = count;
            if(flag == 0)
                break;
        }
        //printf("-%d-%d-\n",count,top);
    }
    printf("%ld\n",maxcount);
  }
  return 0;
}
