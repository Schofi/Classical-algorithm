void bucketsort(int A[],int size,int max_num)//size表示排序数组大小，max_num表示排序数组中最大的数
{
    int count[MAX];
    memset(count,0,sizeof(count));
    for(int i=0;i<size;i++){
        ++count[A[i]];
    }
	int k=0;
    for(int j=0;j<=max_num;j++){
        while(count[j]>0){
            A[k++]=j;
            count[j]--;
        }
    }
}
