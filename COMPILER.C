#include<stdio.h>
#include<string.h>

int main(){
  int T,i,j,top,count;
  char ch,stack[50000];
  scanf("%d",&T);
  for (i = 0; i < T; i++) {
    top = -1;
    count = 0;
    while((ch = getchar())=='\n');
    while(ch != '\n'){
      //printf("$");
      if(ch == '<'){
        stack[++top] = '<';
      }
      else{
        if(top == -1 ){
          break;
        }
        else{
          top--;
          count+=2;
        }
      }
      ch = getchar();
    }
    printf("%d\n",count);
    while(ch !='\n'){
      //printf("_");
      ch = getchar();
    }
  }
  return 0;
}
