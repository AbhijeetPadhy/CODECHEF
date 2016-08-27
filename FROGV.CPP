#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int N,K,P,i,A[100090],B[100090],j,flag,a,b,temp;
    cin>>N>>K>>P;
    for(i=0;i<N;i++){
        cin>>A[i];
        B[i] = A[i];
    }
    sort(B,B+N);
    for(i=0;i<P;i++){
        cin>>a>>b;
        a--;b--;
        if(A[a]>A[b]){
            temp = a;
            a = b;
            b = temp;
        }
        for(j=0;j<N;j++)
            if(B[j] == A[a])
                break;
        flag = 1;
        for(j=j+1;j<N;j++){
            //printf("%d-%d = %d\n",B[j],B[j-1],B[j]-B[j-1]);
            if(B[j]-B[j-1]>K){
                flag = 0;
                break;
            }
            if(B[j] == A[b])
                break;
        }
        if(flag == 1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
