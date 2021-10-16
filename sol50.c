//max no. of continous 1's in binary array.
#include <stdio.h>
int main(){
	int Arr[]={1,0,1,1,0,1,0,0,1,1,1,0,1,1,0,0,0,0,0};
	int n = sizeof(Arr)/sizeof(Arr[0]);
	int max = 0, sum =0;
	for(int i=0;i<n;i++){
		if(Arr[i])
			sum++;
		else{
			if(max < sum)
				max = sum;
			sum = 0;
		}
	}
	printf("%d",max);
	return 0;
}