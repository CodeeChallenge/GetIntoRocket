/* Rotate Array */
#include <stdio.h>
#include <math.h>

//Methord_1
//Shift by 1 methord
void Rotate1(int* Arr,int n,int rotate);
//methord_2
//rotate the complete array
void Rotate2(int* Arr,int n,int rotate);
void print(int* Arr,int n);
int main(){
	int Arr[]={1,2,3,4,5,6,7,8,9};
	int n = sizeof(Arr)/sizeof(Arr[0]);
	int rotate = 4;
	Rotate2(Arr,n,rotate);
	//print(Arr,n);
	return 0;
}
void Rotate1(int* Arr,int n,int rotate){
	//methalogy 
	//store the first element 
	//shift all elements by one 
	for(int i=0;i<rotate;i++){
		int temp = Arr[n-1];
		for(int i = n-2;i>=0;i--){
			Arr[i+1] = Arr[i];
		}
		Arr[0] = temp;
	}
}
void Rotate2(int* Arr,int n,int rotate){
	//methalogy 
	
	//divide the array into 2 parts 
	 // size1 = rotate
	 // size2 = sizeofarray -rotate
	   // 1 2 3 4 5 6 7 8    if rotation is 2
	   // first part ->{1,2} 
	   // second part->{3,4,5,6,7,8}
	//flip both arrays
	   // first part ->{2,1} 
	   // second part->{8,7,6,5,4,3}
	//merge them
	   //{2,1,8,7,6,5,4,3}
	//reverse them
	   //{3,4,5,6,7,8,1,2}
	
}

void print(int* Arr,int n){
	for(int i =0 ;i<n;i++)
		printf("%d ",*(Arr+i));
}