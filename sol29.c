// C++ program to remove duplicates in-place 
#include<iostream> 
using namespace std; 
int removeDuplicates(int *nums,int n);
// Driver code 
int main() 
{ 
	int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	// removeDuplicates() returns new size of 
	// array. 
	n = removeDuplicates(arr, n); 

	// Print updated array 
	for (int i=0; i<n; i++) 
		cout << arr[i] << " "; 

	return 0; 
} 
int removeDuplicates(int *nums,int n){
	if(n == 1 || n==0)
		return n;
	int j = 0;
	for(int i=0;i<n-1;i++){
		if(nums[i] != nums[i+1])
			nums[j++]=nums[i];
	}
	nums[j++]=nums[n-1];
	return j;
}