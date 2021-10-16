#include <stdio.h>
int test(int *Arr,int n);
int main(){
	int Arr[1000];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&Arr[i]);
	int result=test(Arr,n);
	if(result ==-1)
		printf("NO");
	else 
		printf("%d",result);
	return 0;
}
int test(int *Arr,int n){
	int u=0,odd=0;
	for(int i=0;i<n;i++){
		if(Arr[i]%2!=0)
			odd++;
	}
	if(odd%2!=0)
		return -1;
	else{
		for(int i=0;i<n;i++){
			if(Arr[i]%2!=0){
				Arr[i]+=1;
				Arr[i+1]+=1;
				u++;
			}
		}
	}
	return u*2;
}