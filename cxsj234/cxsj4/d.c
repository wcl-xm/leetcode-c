#include<stdio.h>
#include<stdlib.h>

#define N 10000

int getmin(int *p, int n);


int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int *a = (int *)malloc(sizeof(int) *n);
	int *b = (int *)malloc(sizeof(int) *m);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}

	for(int i = 0; i < m; i++){
		b[i] = a[i];
	}

	int num;
	num = getmin(b,m);

	for(int i = 0; i < n-m; i++){
		b[num] = a[m+i];
		num = getmin(b,m);	
	}

	int max = b[0];
	for(int i = 0; i < m-1; i++){
		if(b[i+1]>max){
			max = b[i+1];
		}
	}
	printf("%d\n",max);
}

int getmin(int *p, int n){
	int min = p[0];
	int k ;
	for(int i = 0; i < n-1; i++){
		if(p[i+1] < min){
			min = p[i+1];
			k = i+1;
		}
	}
	return k;
}

