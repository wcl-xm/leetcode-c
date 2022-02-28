#include<stdio.h>
#include<stdlib.h>

int main(){
	int N,NA,NB,a,b,suma,sumb;
	int Tab[5][5]={{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
	scanf("%d%d%d",&N,&NA,&NB);
	int *A = (int *)malloc(sizeof(int) * NA);
	int *B = (int *)malloc(sizeof(int) * NB);
	for(int i = 0; i < NA; i++){
		scanf("%d",&A[i]);
	}
	for(int i = 0; i < NB; i++){
		scanf("%d",&B[i]);
	}

	suma = 0;
	sumb = 0;
	for(int i = 0; i < N; i++){
		a = i%NA;
		b = i%NB;
		if(Tab[A[a]][B[b]]>0){
			suma++;
		}
		else if(A[a]!=B[b]){
			sumb++;
		}
	}
	printf("%d %d",suma,sumb);
}