template<class T>
void Bubblesort(T a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
void swap(T *a,T *b){
	T c=*a;
	*a=*b;
	*b=c;
}
