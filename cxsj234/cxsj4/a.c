#include<stdio.h>

#define num 300

int a[num][5];

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n ; i++){
		scanf("%d%d%d",&a[i][1],&a[i][2],&a[i][3]);
		a[i][4] = a[i][1] + a[i][2]	+ a[i][3];
		a[i][0] = i+1;
	}
	int temp;
	for(int i =0; i < n-1; i++){
		for(int j =0 ; j < n-1-i; j++){
			if(a[j][4]<a[j+1][4]){
				for(int k = 0; k < 5; k++){
					temp = a[j][k];
					a[j][k] = a[j+1][k];
					a[j+1][k] = temp;
				}
			}
			else if(a[j][4]==a[j+1][4]){
				if(a[j][1]<a[j+1][1]){
					for(int k = 0; k < 5; k++){
						temp = a[j][k];
						a[j][k] = a[j+1][k];
						a[j+1][k] = temp;
					}					
				}
				else if(a[j][1]==a[j+1][1]){
					if(a[j][0]>a[j+1][0]){
						for(int k = 0; k < 5; k++){
							temp = a[j][k];
							a[j][k] = a[j+1][k];
							a[j+1][k] = temp;
						}							
					}
				}
			}		
		}
	}
	for(int k = 0; k < 5; k++){
		printf("%d %d\n",a[k][0],a[k][4]);
	}
}