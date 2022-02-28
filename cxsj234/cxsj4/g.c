#include<stdio.h>
#include<stdlib.h>

#define N 5000

int a[N][2];

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	m = m*1.5/1;
	for(int i = 0; i < n; i++){
		scanf("%d%d",&a[i][0],&a[i][1]);
	}

	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-1-i; j++){
			if(a[j][1]<a[j+1][1]){
				int temp;
				temp = a[j][1];
				a[j][1] = a[j+1][1];
				a[j+1][1] = temp;
				temp = a[j][0];
				a[j][0] = a[j+1][0];
				a[j+1][0] = temp;
			}
			else if(a[j][1]==a[j+1][1] && a[j][0]>a[j+1][0]){
				int temp;
				temp = a[j][1];
				a[j][1] = a[j+1][1];
				a[j+1][1] = temp;
				temp = a[j][0];
				a[j][0] = a[j+1][0];
				a[j+1][0] = temp;			
			}
		}
	}

	int gra;
	gra = a[m-1][1];
	for(int i = m-1;a[i][1]==a[i+1][1];m++,i++);
	printf("%d %d\n",gra,m);
	for(int k = 0; k < m; k++){
		printf("%d %d\n",a[k][0],a[k][1]);
	}
}