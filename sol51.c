#include <stdio.h>
#include <stdlib.h>
//inbuild sort ,bsearch
int comp(const void* p,const void* q){
	return (*(int*)p - *(int*)q);
}
int main(){
	int Arr[]={1,3,2,5,4,7,6,8,9,0,5,4,3,5,7};
	int n = sizeof(Arr)/sizeof(Arr[0]);
	//sort
	qsort(Arr,n,sizeof(Arr[0]),comp);
	//search
	int target = 4;
	int *find = bsearch(&target,Arr,n,sizeof(Arr[0]),comp);
	printf("%d",*find);
	return 0;
}