// 快排 | 二分法
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



void quick_sort(int arr[],int left, int right ){//argu(int *a ,0,n-1)
	int pos;
	if(left<right){
		pos = get_mid(arr,left,right);
		quick_sort(arr,left,pos-1);
		quick_sort(arr,pos+1,right);
	}
	return ;
}
