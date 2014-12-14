import sys
T=int(raw_input())
for i in range(1,T+1):
	S=raw_input()
	sum=0
	A=[]
	for j in range(0,52):
		A.append(0)
	for j in S:
		if ord(j)>='A' and ord(j)<='Z':
			A[ord(j)-ord('A')+26]+=1;
		else:
                	A[ord(j)-ord('a')]+=1;
        for j in range(0,52):
        	if A[j]%2==0:
                	sum=sum+A[j]/2;
            	else:
                	sum=sum+A[j]/2+1;
        print sum
        
