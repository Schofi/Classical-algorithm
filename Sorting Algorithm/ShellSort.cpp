template<class T>
vector<int> ShellSort(vector<int> list){
	vector<int> result=list;
	int n=result.size();
	for(int gap=n>>1;gap>0;gap>>=1){
		for(int i=gap;i<n;i++){
			int temp=result[i];
			int j=i-gap;
			while(j>=0&&result[j]>temp){
				result[j+gap]=result[j];
				j-=gap;
			}
			result[j+gap]=temp;
		}
		for(int i=0;i<result.size();i++){
			cout<<result[i]<<" ";
	   }
	   cout<<endl;
	}
	return result;
}
