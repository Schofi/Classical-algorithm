template<typename Item>
class IndexMaxHeap{
	private:
		Item* data;
		int *indexs;
		int count;
		int capacity;
		
		void shiftUp(int k)
		{
			while(k>1&&data[indexs[k/2]]<data[indexs[k]])
			{
				swap(indexs[k/2],indexs[k]);
				k/=2;
			}
		}
		
		void shiftDown(int k)
		{
			while(2*k<=count)
			{
				int j=2*k;
				if(j+1<=count&&data[indexs[i+1]]>data[indexs[j]])
				{
					j+=1;
				}
				if(data[indexs[k]]>=data[indexs[j]])
				{
					break;
				}
				swap(indexs[k],indexs[j]);
				k=j;
			}
		}
		
	public:
		IndexMaxHeap(int capacity)
		{
			data=new Item[capacity+1];
			indexs=new int[capacity+1];
			count=0;
			this->capacity=capacity;
		}
		~MaxHeap()
		{
			delete [] data;
			delete [] indexs;
		}
		int size()
		{
			return count;
		}
		bool isEempty()
		{
			return count==0;
		}
		//传入的i对用户而言，是从0开始的
		void insert(int i,Item item)
		{
			assert(count+1<=capacity);
			assert(i+1>=1&&i+1<=capacity);
			i+=1;
			data[i]=item;
			indexs[count+1]=i;
			count++;
			shiftUp(count);
		}
		Item extractMax()
		{
			assert(count>0);
			Item ret=data[indexs[1]];
			swap(indexs[1],indexs[count]);
			count--;
			shiftDown(1);
			return ret;
		}
		Item extractMaxIndex()
		{
			assert(count>0);
			Item ret=indexs[1]-1;
			swap(indexs[1],indexs[count]);
			count--;
			shiftDown(1);
			return ret;
		}
		Item getItem(int i)
		{
			return data[i+1];
		}
		void change(int i,Item newItem)
		{
			i+=1;
			data[i]=newItem;
			//找到indexs[j]=i,j表示data[i]在堆中的位置
			for(int j=1;j<=count;j++)
			{
				if(indexs[j]==i)
				{
					shiftUp(j);
					shiftDown(j);
					return;
				}
			}
		}
}
