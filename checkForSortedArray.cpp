#include <bits/stdc++.h>
int comparator(int num1, int num2, int c){
	if(!c && (num1 >= num2))	return 1;
	else if(c && (num1 <= num2))	return 1;
	else	return 0;
}
int isSorted(int* nums,int n){
	if(n < 2)	return 1;
	int comp = 0;
	if(nums[0] <= nums[1])	comp = 1;
	
	for(int i = 1;i<n-1;i++){
		if(comparator(nums[i],nums[i+1],comp)!=1)
			return 0;
	}
	return 1;
}
int main(){
	int n;
	std::cin>>n;
	int* nums = new int[n];
	for(int i =0;i<n;i++)
		std::cin>>nums[i];
	std::cout<<isSorted(nums,n);
	return 0;
}