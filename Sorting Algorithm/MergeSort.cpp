template<class T>
void Merge(T arr[],int left,int mid,int right,T tmp[])
{
	int i=left;
	int j=mid+1;
	int t=0;
	while(i<=mid&&j<=right)
	{
		if(arr[i]<=arr[j])
		{
			tmp[t++]=arr[i++];
		}else
		{
			tmp[t++]=arr[j++];
		}
	}
	while(i<=mid)
	{
		tmp[t++]=a[i++];
	}
	while(j<=right)
	{
		tmp[t++]=arr[j++];
	}
	t=0;
	while(left<=right)
	{
		arr[left++]=temp[t++];
	}
}
void MergeSort(T arr[],int left,int right,T temp[])
{
	if(left<right)
	{
		int mid=left+(right-left)/2;
		MergeSort(arr,left,mid,temp);
		MergeSort(arr,mid+1,right,temp);
		Merge(arr,left,mid,right,temp);
	}
}
