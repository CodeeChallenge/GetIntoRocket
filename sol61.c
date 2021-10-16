#include <stdio.h>
#include <stdlib.h>
int mountainArray(int* Arr,int n);
int main(){
	int n;
	scanf("%d",&n);
	int Arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&Arr[i]);
	printf("%d",mountainArray(Arr,n));
	return 0;
}
int mountainArray(int* Arr,int n){
	if(n<3)
		return 0;
	int cmp = 1;
	for(int i=0;i<n-1;i++){
		if(Arr[i] < Arr[i+1] && cmp)
			continue;
		else if(Arr[i] > Arr[i+1] && !cmp)
			continue;
		else if(Arr[i] > Arr[i+1])
			cmp =0;
		else 
			return 0;
	}
	return 1;
}