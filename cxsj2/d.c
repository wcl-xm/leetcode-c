#include <stdio.h>

int main()
{
	int n,s;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(n%i==0)
		{
			s = n/i;
			break;
		}

	}
	printf("%d\n",s);
	return 0;
	
}