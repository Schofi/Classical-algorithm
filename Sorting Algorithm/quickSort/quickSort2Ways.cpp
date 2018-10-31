template<class T>
void quickSort(T arr[],int n){
	srand(time(NULL));
	__quickSort2Ways(arr,0,n-1);
}
template<class T>
void __quickSort2Ways(T arr[],int l,int r){
	if(l>=r){
		return ;
	}
	int p=__partition(arr,int l,r);
	__quickSort2Ways(arr,l,p-1);
	__quickSort2Ways(arr,p+1,r);
}
template<class T>
int __partition(T arr[],int l,int n){
	swap(arr[l],arr[rand()%(r-l+1)+l]);
	T v=arr[l];
	int i=l+1,j=r;
	while(true)
	{
		while(i<=r&&arr[i]<v){
			i++;
		}
		while(j>=l+1&&arr[j]>v){
			j--;
		}
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
	swap(arr[l],arr[j]);
	return j;
}
