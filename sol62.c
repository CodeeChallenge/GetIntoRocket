//robbery
#include <stdio.h>
#include <stdlib.h>
int main(){
	int nums[]={1,3,7,3};
	int prevMax = 0, currMax = 0;
	int n = sizeof(nums)/sizeof(nums[0]);
	for(int i=0;i<n;i++)
		{
			int temp = currMax;
			if(prevMax + nums[i] > currMax)
			  currMax = prevMax + nums[i];
			prevMax = temp;
		}
		printf("%d",currMax);
	return 0;
}