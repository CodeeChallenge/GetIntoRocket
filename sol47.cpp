#include <bits/stdc++.h>
using namespace std;
void func(int* Arr,int n);
int main(){
	int a[]={2,1,3,4,1,2,5,7,1,2,5,4,3,7,2};
	int n = sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	func(a,n);
	printf("\n");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
int func(int* Arr,int n){
	int min=
	for(int i = n-2; i>=0; i--){
		if(Arr[i] < replace){
			replace = replace ^ Arr[i];
			Arr[i] = replace ^ Arr[i];
			replace = replace ^ Arr[i];
			continue;
		}
		if(Arr[i] < Arr[i+1]){
			Arr[i] = Arr[i+1];
		}
	}
}