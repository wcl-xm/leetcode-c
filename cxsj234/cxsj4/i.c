#include<stdio.h>

#define N 100

int a[N];
int b[N] = {0};

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}

	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-1-i; j++){
			if(a[j]>a[j+1]){
				int temp;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	int sum,num;
	num = 0;
	for(int i = 0; i < n-1; ){
		for(int j = i+1; j < n; j++){
			sum = a[i] + a[j];
			for(int k = j+1; k < n; k++){
				if(sum == a[k]){
					b[k]++;
					if(b[k]==1)
						num ++;
					break;
				}
			}
		}
		i++;
	}
	printf("%d",num);
}