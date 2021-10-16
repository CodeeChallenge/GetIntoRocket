#include <bits/stdc++.h>
using namespace std;
int binary_search(int* A,int item,int low,int high){
	if(high >= low){
		int mid = low + (high-low)/2;
		if (A[mid] == item)
			return mid;
		if(A[mid] > item)
			return binary_search(A,mid,high,item);
		return binary_search(A,low,mid,item);		
	}
}
int main(){
	int Arr[]={1,2,3,4,5,6,7,8,9,0};
	int item = 4;
	int n = sizeof(Arr)/sizeof(Arr[0]);
	cout<<binary_search(Arr,item,0,n);
	return 0;
}