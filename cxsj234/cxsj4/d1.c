#include<stdio.h>
#include<stdlib.h>

int min(int *p, int n)
{
	int num = p[0];
	int k = 0;		
	for (int i = 0; i < n - 1; i++)
	{
		if (num > p[i + 1])
		{
			num = p[i + 1];
			k = i + 1;
		}
	}
	return k;
}

int main()
{
	int n, m, k;
	scanf("%d %d", &n, &m);
	int *p1 = (int *)malloc(sizeof(int) *n);
	int *p2 = (int *)malloc(sizeof(int) *m);
	for (int i = 0; i < n; i++){
		scanf("%d", &p1[i]);
	}
	for (int i = 0; i < m; i++){
		p2[i] = p1[i];
	}
	
	k = min(p2, m);	
	for (int i = 0; i < n - m; i++){
		p2[k] += p1[i + m];	
		k = min(p2, m);		
	}

	int max = p2[0];
	for (int i = 0; i < m - 1; i++){
		if (max < p2[i + 1]){
			max = p2[i + 1];
		}
	}
	printf("%d\n",max);
	return 0;
}
