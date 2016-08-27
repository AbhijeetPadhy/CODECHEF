    #include<stdio.h>

    int main(){
    	int T,N,i,j;
    	scanf("%d",&T);
    	for(i=0;i<T;i++){
    		scanf("%d",&N);
    		for(j=1;j*j<=N;j++);
    		printf("%d\n",j-1);
    	}
    	return 0;
    } 