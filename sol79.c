#include <stdio.h>
int msb(int n);
void MsbSort(int* nums,int n);
void print(int* nums,int n);
void countsort(int* nums,int n);
int main(){
	int nums[]={101,12,45,870,300,124,124,0,9};
	int n = sizeof(nums)/sizeof(nums[0]);
	MsbSort(nums,n);
	print(nums,n);
	return 0;
}
void print(int* nums,int n){
	for(int i=0;i<n;i++)
		printf("%d ",nums[i]);
}
void MsbSort(int* nums,int n){
	//make MSB array
	for(int i =0;i<n;i++){
		nums[i] = msb(nums[i]);
	}
	//count sort
	print(nums,n);
	printf("\n");
	countsort(nums,n);
}
void countsort(int* nums,int n){
	int execute[10]={0};
	for(int i=0;i<n;i++)
	{
		execute[nums[i]]++;
	}
	int x = 0;
	for(int i=0;i<10;i++){
		while(execute[i]){
			nums[x++] = i;
			execute[i]--;
		}
	}
}
int msb(int n){
	while(n>9){
		n/=10;
	}
	return n;
}