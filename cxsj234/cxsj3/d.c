#include<stdio.h>

int main(){
	char a[3][4];
	for(int i = 0; scanf("%s",a[i])!=EOF; i++)
		if(i==2){
			if(a[0][0]==a[2][2] && a[0][1]==a[2][1] && a[0][2]==a[2][0] && a[1][0]==a[1][2])
				printf("YES\n");
			else
				printf("NO\n");
			i = -1;
		}
}