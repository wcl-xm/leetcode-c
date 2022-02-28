#include<stdio.h>
#include<stdlib.h>

#define num 500

int a[num][num];

int main(){
	int n,m,t;
	int x,y,w;
	int k,cost;
	scanf("%d%d%d",&n,&m,&t);
	
	for (int i = 0; i < m; i++){
		scanf("%d%d%d",&x,&y,&w);
		a[x-1][y-1] = w;
		a[y-1][x-1] = w;
	 }

	 for(int j = 0; j < t; j++){
		cost = 0;
		scanf("%d",&k);
		int *b = (int *) malloc(sizeof(int)*k);
		for(int f = 0 ; f < k; f++)
			scanf("%d",b+f);
		for(int g = 0 ; g < k-1; g++)
			cost += a[b[g]-1][b[g+1]-1];
		printf("%d\n",cost);
	 }
}