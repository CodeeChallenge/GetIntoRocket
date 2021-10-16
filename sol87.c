#include <stdio.h>
void func(int* num1,int n1,int* num2);
int main(){
	int num1[]={2,3,4,2,5};
	int num2[]={2,3,4,2,5};
	func(num1,5,num2);
	return 0;
}
void func(int* num1,int n1,int* num2){
	int start = -1,end = -1;
	for(int i =0;i<n1;i++){
		if(num1[i] != num2[i]){
			if(start == -1){ 
				start = i;
				break;
				}
		   }
	  }
	for(int i=n1-1;i>=0;i--){
		if(num1[i] != num2[i]){
			if(end == -1){ 
				end = i;
				break;
				}
			}
		}
	int dist = num1[start] - num2[start];
	for(int i=start;i<=end;i++){
		if(num2[i]+dist != num1[i]){
			printf("NO\n");
			return;
		}
	}
	printf("YES\n");
}