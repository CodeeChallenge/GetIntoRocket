#include <bits/stdc++.h>
using namespace std;
int find_repeat(vector<int>);
int find_repeat_eff(vector <int> Arr);
int main(){
	vector<int> Arr{3,2,2,3,7,5,6,8,4,5,7,8};
	cout<<find_repeat_eff(Arr);	
	return 0;
}
int find_repeat(vector<int> Arr){
	int n = sizeof(Arr)/sizeof(Arr[0]);
	for(int i = 0;i<n;i++){
		for(int j =0;j<n;i++)
		if(i != j && Arr[i] == Arr[j])
			return Arr[i];
	}
	return -1;
}
int find_repeat_eff(vector <int> Arr){
	map<int,int> hash;
	int n = sizeof(Arr)/sizeof(Arr[0]);
	for(int i =0;i<n;i++){
		if(hash[i] >=1)
			return Arr[i];
		else 
			hash[Arr[i]]++;
	}
}