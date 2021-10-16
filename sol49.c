//github max sum of subarray
#include <stdio.h>
int main(){
	int Arr[]={1,-3,5,6,8,-7,2,-5};
	int sum = 0,max=0;
	int n = sizeof(Arr)/sizeof(Arr[0]);
	for(int i=0;i<n;i++){
		sum += Arr[i];
		if(sum > max){
			max = sum;
		}
		if(sum < 0){
			sum = 0;
		}
	}
	printf("%d",max);
	return 0;
}