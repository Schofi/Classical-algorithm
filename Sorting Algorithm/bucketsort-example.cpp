#include <stdio.h>
#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;
//桶式排序有很多局限性，第一，数组元素必须都是正整数，第二，数组元素不能太大，如果要排序的数中1001，那么我们就需要构造一个1001大小的数组
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


int main()
{
    // 测试    
    int a[] = {2, 5, 6, 12, 4, 8, 8, 6, 7, 8, 8, 10, 7, 6, 0, 1};    
    bucketsort(a, sizeof(a) / sizeof(a[0]), 15); 
    for(int i=0;i<16;i++){
    	cout<<a[i]<<" ";
	}
    return 0;
}
