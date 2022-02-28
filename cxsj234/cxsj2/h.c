#include<stdio.h>

int main(){
	long long n,s,m;
	int mod;
	mod = 998244353;
	m = 2 , s= 1;
	
	scanf("%d",&n);
	n = n-1;

	while(n){
		if(n & 1)
			s = s*m%mod;
		m = m*m%mod;
		n >>= 1;	
	}

	printf("%d",s);
}