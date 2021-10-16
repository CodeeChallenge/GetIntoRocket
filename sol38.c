#include <stdio.h>
int removeElement(int* nums, int n, int val);
int main(){
	int nums[]={3,2,2,3};
	int n=sizeof(nums)/sizeof(nums[0]);
	int val=3;
	n = removeElement(nums,n,val);
	for(int i=0;i<n;i++)
		printf("%d ",nums[i]);
	return 0;
}
int removeElement(int* nums, int n, int val){
    int m=0;
    for(int i=0;i<n;i++){
        if(nums[i] != val){
            nums[m++] = nums[i];
        }
    }
    //nums[m++] = nums[n-1];
    return m;
}