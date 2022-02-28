#include<stdio.h>

int main(){
	int n,s,m;
	int a,b;
	scanf("%d",&n);scanf("%d",&s);scanf("%d",&m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d",&a,&b);
		if(a==1){
			if((b+s)>n)
				s = b+s-n;
			else
				s = s+b;
			
		}
		else{
			if((s-b)<0)
				s = s+(n-b);
			else if((s-b)!=0)
				s = s-b;
			else
				s = n;
		}
	}
	printf("%d",s);
}