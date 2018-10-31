template<class T>
int __parition(T arr[],int left,int right)
{
	T v=arr[left];
	int j=left;
	for(int i=left+1;i<=right;i++)
	{
		if(arr[i]<v)
		{
			j++;
			swap(arr[j],arr[i]);
		}
	}
	swap(arr[l],arr[j]);
	return j;
}
void __quickSort(T arr[],int left,int right)
{
	if(l>=r)
	{
		return;
	}
	int p=__parition(arr,left,right);
	__quickSort(arr,left,p-1);
	__quickSort(arr,p+1,right);
}
void quickSort(T arr[],int length)
{
	__quickSort(arr,0,length-1);
}
