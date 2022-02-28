#include <stdio.h>
int main()
{
	int n,s;
	s = 0;
	while(scanf("%d",&n)!=EOF){
		while(n!=0){	
			s=s*10+n%10;
			n=n/10;
		}
		printf("%d\n",s);
	}

}