#include<stdio.h>
int a[1000];
int main(){
	int n;
	scanf("%d",&n);
	
	for(int m = 0; m < n; m++){
		scanf("%d",a+m);
	}

	int temp,s,i,j;
	for(i = 0 ; i < n-1; i++){
		for(j = 0 ; j < n-i-1; j++){
			if(a[j]<a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;	
			}
		}
	}
	s = 0;
	for(int k = 0; k <n; k++){
		s += a[k]*(k+1);
	}
	printf("%d",s);
}