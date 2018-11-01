#include <iostream>
#include <vector>
using namespace std;
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
		void remove(int x)
		{
			int index=x>>6;
			int position=x%32;
			bits[index]&=~(1<<position);
		}
		bool contain(int x)
		{
			int index=x>>6;
			int position=x%32;
			return (bits[index]&(1<<position))!=0;
		}
};
int main() {
	BitMap b(200);
	b.add(136);
	b.add(45);
	cout<<b.contain(136)<<endl;
	b.remove(136);
	cout<<b.contain(136)<<endl;
	cout<<b.contain(45)<<endl;
	return 0;
}
