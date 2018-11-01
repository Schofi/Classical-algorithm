class BitMap{
	private:
		vector<int> bits;
	public :
		BitMap(int capacity)
		{
			bits.resize(capacity/32+1);
		}
		void add(int x)
		{
			int index=x>>6;
			int position=x%32;
			bits[index]|=1<<position;
		}
		void reomve(int x)
		{
			int index=x>>6;
			int position=x%32;
			bits[index]&=~(1<<position);
		}
		bool contain(int x)
		{
			int index=x>>6;
			int position=n%32;
			return (arr[index]&(1<<position))!=0;
		}
};
