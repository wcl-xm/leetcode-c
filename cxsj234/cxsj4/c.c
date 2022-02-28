#include<stdio.h>

#define num 100

int a[2][num];

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n+1; i++){
		scanf("%d",&a[0][i]);
		a[1][i] = n-i;
	}

	for(int i = 0; i < n+1; i++){
		if(a[0][i]==0 && n!=0){
			continue;
		}
		if(i!=0 && a[0][i]>0){
			printf("+");
		}
		else if(a[0][i]<0){
			printf("-") ;
		}

		if(a[0][i]>1){
			printf("%d",a[0][i]); 
		}
		else if(a[0][i]<-1){
			printf("%d",-a[0][i]); 
		}

		if(a[1][i]>1){
			printf("x^%d",a[1][i]);
		}
		else if(a[1][i]==1){
			printf("x");
		}
		else if(a[1][i]==0){
			if(a[0][i]==1 ||a[0][i]==0){
				printf("%d",a[0][i]);
			}
			else if(a[0][i]==-1){
				printf("%d",-a[0][i]);
			}
		}
			
	}

}