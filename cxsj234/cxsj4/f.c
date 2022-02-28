#include<stdio.h>
#include<stdlib.h>

#define N 100



int main(){
	int a[N];
	int b[N];
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}

	int m,flag;
	m = 0;
	flag = 0;

	for(int i = 0; i < n; i++){
		for(int j =0; j < m; j++){
			if(a[i]==b[j]){
				flag = 1;
				break;
			}
		}
		if(!flag){
			b[m] = a[i];
			m++;
		}
		flag = 0;
	}

	for(int i = 0; i < m-1 ; i++){
		for(int j = 0; j < m-1-i; j++){
			if(b[j+1]<b[j]){
				int temp;
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp; 
			}
		}
	}
	printf("%d\n",m);
	for(int k = 0; k < m; k++){
		printf("%d ",b[k]);
	}
}