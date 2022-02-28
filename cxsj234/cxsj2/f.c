#include<stdio.h>
int main(){
	int x,y,n;
	int a,b;
	scanf("%d%d",&x,&y);
	scanf("%d",&n);
	for (int  i = 0; i < n; i++)
	{
		scanf("%d%d",&a,&b);
		switch (a)
		{
		case 0:
			y += b;
			break;
		case 1:
			x += b;
			break;
		case 2:
			y -= b;
			break;
		case 3: 
			x -= b;
			break;
		}
	}
	printf("%d %d",x,y);
	return 0;
}