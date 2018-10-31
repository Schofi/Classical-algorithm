template<class T>
void quickSort(T arr[],int n){
	srand(time(NULL));
	__quickSort3Ways(arr,0,n-1);
}
template<class T>
void __quickSort3Ways(T arr[],int l,int r)
{
	if(r-l<=15){
		insertionSort(arr,l,r);
		return ;
	}
	swap(arr[l],arr[rand()%(r-l+1)+l]);
	T v=arr[l];
	int lt=l;
	int gt=r+1;
	int i=l+1;
	while(i<gt){
		if(arr[i]<v){·
			swap(arr[i],arr[lt+1]);
			lt++;
			i++;
		}else if(arr[i]>v){
			swap(arr[i],arr[gt-1]);
			gt--;
		}else{
			i++;
		}
	}
	swap(arr[l],arr[lt]);
	
	__quickSort3Ways(arr,l,lt-1);
	__quickSort3Ways(arr,gt,r);
}
