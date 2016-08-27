#include<stdio.h>

int main(){
    int T,i;
    char ch;
    scanf("%d",&T);
    fflush(stdin);
    for(i=0;i<T;i++){
        while((ch = getchar()) == '\n');
        //scanf("%c",&ch);
        //printf("-%d-",ch);
        switch(ch){
            case 'b':
            case 'B':
                printf("BattleShip\n");
                break;
            case 'c':
            case 'C':
                printf("Cruiser\n");
                break;
            case 'd':
            case 'D':
                printf("Destroyer\n");
                break;
            case 'f':
            case 'F':
                printf("Frigate\n");
                break;
   
        }
    }
    return 0;
} 
