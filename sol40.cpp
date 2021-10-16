#include <bits/stdc++.h> 
using namespace std; 
  
// Function to leftRotate array multiple times
void rotate(int *Arr,int n,int k){
	k = k%n;
    if(n == 0 || k == 0)
		return ;
	while(k--){
		int m = Arr[n-1];
		for(int i=n-1;i>0;i--){
			Arr[i] = Arr[i-1];
		}
		Arr[0] = m;
	}
} 
void leftRotate(int arr[], int n, int k) 
{ 
    /* To get the starting point of rotated array */
    int mod = k % n; 
  
    // Prints the rotated array from start position 
    for (int i = 0; i < n; i++) {
        cout<<(arr[(mod + i) % n])<< " "; 
    }
    cout << "\n"; 
} 
void rotate1(int *Arr,int n,int k){
	k = k%n;
    int Arr1[n],j=0;
    for(int i=0;i<n;i++){
        Arr1[j++] = Arr[(k+i)%n]; 
    }
    for(int i=0;i<n;i++){
         printf("%d ",Arr1[i]);
    }
    for(int i=0;i<n;i++)
    	Arr[n-1-i] = Arr1[i];
    	printf("\n");
    for(int i=0;i<n;i++){
         printf("%d ",Arr[i]);
    }
    	
}
  
// Driver program 
int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    rotate1(arr,n,1);
    //for(int i=0;i<n;i++)
    //	printf("%d ",arr[i]);
    return 0; 
} 