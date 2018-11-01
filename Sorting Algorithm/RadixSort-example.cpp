#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
void RadixSort(int* arr,int size)
{
	int n;
	for(int i=1;i<=100;i=i*10)
	{
		int tmp[10][10];
		memset(tmp,0,sizeof(tmp));
		for(int j=0;j<size;j++)
		{
			n=(arr[j]/i)%10;
			tmp[j][n]=arr[j];
		}
		int k=0;
		for(int p=0;p<10;p++)
		{
			for(int q=0;q<size;q++)
			{
				if(tmp[q][p]!=0)
				{
					arr[k++]=tmp[q][p];
				}
			}
		}
	}
}
int main() {
	int arr[6]={34,65,235,45,7,8};
	RadixSort(arr,6);
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
