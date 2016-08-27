#include<stdio.h>
#include<string.h>

int main(){
    char str[8];
    long long int rmax=-1,cmax=-1,RC,X,N,Q,i,j;
    scanf("%lld %lld",&N,&Q);
    long long int R[N],C[N];
    for(j=0;j<N;j++)
            R[j]=C[j]=0;
    for(i=0;i<Q;i++){
        scanf("%s %lld %lld",str,&RC,&X);
        if(strcmp(str,"RowAdd")==0){
            R[RC-1]+=X;
            if(R[RC-1]>rmax)
                rmax=R[RC-1];
        }
        else if(strcmp(str,"ColAdd")==0){
            C[RC-1]+=X;
            if(C[RC-1]>cmax)
                cmax=C[RC-1];
        }
    }
    printf("%lld\n",rmax+cmax);
    return 0;
}
