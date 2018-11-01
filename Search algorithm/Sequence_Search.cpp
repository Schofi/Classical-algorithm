template<class T>
int Sequence_Search(T a[],T value,int n)
{
	int i;
	for(int i=0;i<n;i++)
	{
		if(a[i]==value)
		{
			return i;
		}
	}
	return -1;
}
