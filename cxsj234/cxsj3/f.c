#include<stdio.h>


int main(){
	char a[1001];
	int D,X;
	D = 0;
	X = 0;
	scanf("%s",a);
	for(int j = 0; a[j]!='\0'; j++){
		if(a[j]<'a')
			D++;
		else
			X++;
	}
	if(D>X)
		for(int i = 0; a[i]!='\0';i++){
			if(a[i]>'Z')
				a[i] -= 32;
	}
	else
		for(int i = 0; a[i]!='\0';i++){
			if(a[i]<'a')
				a[i] += 32;
	}
	printf("%s",a);

}