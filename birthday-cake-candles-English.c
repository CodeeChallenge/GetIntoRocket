#include <bits/stdc++.h>
using namespace std;
int findmax(int *Arr,int n);
int findsame(int *Arr,int findthis,int n);
int main(){
	int n;
	cin>>n;
	int Arr[n];
	for(int i=0;i<n;i++)
		cin>>Arr[i];
	int max=findmax(Arr,n);
	int same=findsame(Arr,max,n);	
	printf("%d",same);	
	return 0;
}
int findmax(int *Arr,int n){
	int max=Arr[0];
	for(int i=1;i<n;i++)
		if(max < Arr[i])
			max = Arr[i];
	return max;	
}
int findsame(int *Arr,int findthis,int n){
	int u=0;
	for(int i=0;i<n;i++)
		if(Arr[i] == findthis)
			u++;
	return u;	
}