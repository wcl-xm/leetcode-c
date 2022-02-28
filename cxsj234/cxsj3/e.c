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
}


int main(){
	int num,m,mix4;
	int *a;
	scanf("%d",&num);
	a = (int *) malloc(sizeof(int) * num);
	for(int i =0; i < num; i++)
		scanf("%d",a+i);
	quick_sort(a,0,num-1);
	m = 3;
	for(int j = 1;;j++){
		if(a[j]>a[j-1]){
			m--;
			if(m==0){
				mix4 = a[j];
				break;
			}	
		}
	}
	printf("%d",mix4);
}