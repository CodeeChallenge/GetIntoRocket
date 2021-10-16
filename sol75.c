#include <stdio.h>
#define MAX 3
void print(int (*nums)[MAX]);
void replace(int (*nums)[MAX],int k);
//using namespace std;
int main(){
	int nums[MAX][MAX]={{1,2,3},{4,5,6},{7,8,9}};
	int k = 3;
	replace(nums,k);
	print(nums);
}	
void replace(int (*nums)[MAX],int k){
	for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++){
			 
		}
	}
}
void print(int (*nums)[MAX]){
	for(int i=0;i<MAX;i++){
		printf("\n");
		for(int j=0;j<MAX;j++)
			printf("%d ",nums[i][j]);
	}
}