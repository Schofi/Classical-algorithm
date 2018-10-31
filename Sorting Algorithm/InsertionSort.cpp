template<class T>
void InsertionSort(T arr[],int l,int r){
	for(int i=l+1;i<=r;i++){
		T e=arr[i];
		int j;
		for(j=i;j>l&&(arr[j-1]>e);j--){
			a[j]=a[j-1];
		}
		a[j]=e;
	}
	return;
}
