template<class T>
void SelectSort(T a[],int length){
	for(int i=0;i<length-1;i++){
		for(int j=i+1;j<length;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}
void swap(T *a,T *b){
	T c=*a;
	*a=*b;
	*b=c;
}
