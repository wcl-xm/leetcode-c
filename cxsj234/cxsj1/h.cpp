#include <stdio.h>
int main(){
	int i,a,b,c,n;
	int ma,m=0;
	scanf("%d",&n);
	for(i=1;i<4;i++){
		scanf("%d %d",&a,&b);
		if(n%a>0){
		    c=n/a+1;
		}
		else{
			c=n/a;
		}
		ma=b*c;
		if(ma<m || m==0){
			m=ma;
		}
	}
	printf("%d",m);
	return 0;
}
