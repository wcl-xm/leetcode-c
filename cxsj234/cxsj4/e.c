#include<stdio.h>
#include<stdlib.h>

#define N 10000

int a[N][2]={0};

int main(){
	int n;
	scanf("%d",&n);
	int *b = (int *)malloc(sizeof(int)*n);
	for(int i = 0 ; i < n; i++){
		scanf("%d",&b[i]);
	}
	int m,flag;
	m = 0;
	flag = 0;
	for(int i = 0; i < n; i++){
		for(int j =0; j < m; j++){
			if(b[i]==a[j][0]){
				a[j][1]++;
				flag = 1;
				break;
			}
		}
		if(!flag){
			a[m][0] = b[i];
			a[m][1]++;
			m++;
		}
		flag = 0;
	}
	for(int i = 0; i < m-1 ; i++){
		for(int j = 0; j < m-1-i; j++){
			if(a[j+1][0]<a[j][0]){
				int temp;
				temp = a[j][0];
				a[j][0] = a[j+1][0];
				a[j+1][0] = temp; 
				temp = a[j][1];
				a[j][1] = a[j+1][1];
				a[j+1][1] = temp; 
			}
		}
	}
	for(int k =0 ; k < m; k++){
		printf("%d %d\n",a[k][0],a[k][1]);
	}
}

