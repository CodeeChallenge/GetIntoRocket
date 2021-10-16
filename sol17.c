#include <stdio.h>
int find(int *Arr,int n);
int main(){
	int n;
	scanf("%d",&n);
	int Arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&Arr[i]);
	n=find(Arr,n);
	printf("\n");
	for(int i=0;i<n;i++)
		printf("%d ",Arr[i]);
	return 0;
}
int find(int *arr,int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			
		}
	}	
}