#include <stdio.h>

int main()
{
	int n1,n2,n,i,s;
	s=0;
	
	scanf("%d%d",&n1,&n2);
	for(i=0,n=n1;n<=n2;){	
		while(n){
			if((n%10-2)==0)
				s++;
			n = n/10;
		}
		i++;
		n = n1+i;
	}
	printf("%d\n",s);
	return 0;
	
}