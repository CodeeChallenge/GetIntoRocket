//reverse, insert and shift in array and linked list
#include <stdio.h>
#define MAX 10
void shift1(int* Arr,int n,int times);
void print(int* nums,int n);
int insert(int* nums,int n,int pos,int item);
void reverse(int* Arr,int n);
void shift(int* Arr,int n,int times);
int main(){
	int Arr[MAX];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&Arr[i]);
	print(Arr,n);
	shift1(Arr,n,2);
	print(Arr,n);
	return 0;
}
void print(int* Arr,int n){
	for(int i=0;i<n;i++)
		printf("%d ",Arr[i]);
	printf("\n");
}
void reverse(int* Arr,int n){
	for(int i=0;i<n/2;i++){
		int temp;
		temp = Arr[i];
		Arr[i] = Arr[n-1-i];
		Arr[n-1-i] = temp;
	}
}
int insert(int* Arr,int n,int pos,int item){
	for(int i=n;i>=pos;i--){
		Arr[i] = Arr[i-1];
	}
	Arr[pos-1] = item;
	return n+1;
}
void shift(int* Arr,int n,int times){
	int temp;
	times = times % n;
	for(int r=0;r<times;r++){
	 temp = Arr[n-1];
	  for(int i=n-1;i>=0;i--){
			Arr[i] = Arr[i-1];
		}
	}
	Arr[0] = temp;
}
void shift1(int* Arr,int n,int times){
	int new1[n],ref = 0;;
	for(int i=times;i<n;i++)
		new1[i] = Arr[ref++];
	for(int i=0;i<times;i++)
		new1[i] = Arr[ref++];
	for(int i=0;i<n;i++){
		Arr[i] = new1[i];
	}
}