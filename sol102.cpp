#include <bits/stdc++.h>
using namespace std;
void swap(int *p,int *q){
	int temp = *p;
	*p = *q;
	*q = temp;
}
vector<int> SelectionSort(vector<int> Arr){
	int n = Arr.size();
	for(int i = 0;i<n-1;i++){
		int min = i;
		for(int j = i;j<n;j++){
			if(Arr[min] > Arr[j])
				min = j;
		}
		swap(&Arr[min],&Arr[i]);
	}
	return Arr;
}
vector<int> InsertionSort(vector<int> Arr){
	int n = Arr.size();
	for(int i=1;i<n;i++){
 		int j = i-1;
 		while(Arr[i] > Arr[j] && j>=0){
 			swap(&Arr[j],&Arr[--j]);
 		}
 		swap(&Arr[j],&Arr[i]);
	}
	return Arr;
}
void print(vector<int> Arr){
	for(auto i : Arr){
		cout<<i<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int> Arr{1,54,23,456,53,7,3,8,3,6,0,6};
	//Selection Sort
	//Arr = SelectionSort(Arr);
	//print(Arr);
	//Insertion Sort
	Arr = InsertionSort(Arr);
	print(Arr);
	//B-Insertion Sort
	//Counting Sort
	return 0;
}