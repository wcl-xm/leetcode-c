#include<stdio.h>
#include<stdlib.h>

int get_mid(int arr[],int left, int right){
	int mid;
	mid = arr[left];
	while(left<right){
		while(left<right && arr[right]>=mid)
			right--;
		if(left<right)
			arr[left++]=arr[right];
		while(left<right && arr[left]<=mid)
			left++;
		if(left<right)
			arr[right--]=arr[left];
	}
	arr[left] = mid;
	return left;
}



void quick_sort(int arr[],int left, int right ){
	int pos;
	if(left<right){
		pos = get_mid(arr,left,right);
		quick_sort(arr,left,pos-1);
		quick_sort(arr,pos+1,right);
	}
	return ;
}


int main(){
	int w,n;
	scanf("%d",&w);
	scanf("%d",&n);
	int *a = (int *)malloc(sizeof(int)*n);
	for(int i = 0; i < n; i++){
		scanf("%d",a+i);
	}
	quick_sort(a,0,n-1);
	int left = 0; int right = n-1; int num;
	num = 0;
	while(left<=right){
		if(a[left]+a[right]<=w){
			num ++;
			left++;
			right--;
		}
		else{
			num++;
			right--;
		}
	}
	printf("%d",num);
}