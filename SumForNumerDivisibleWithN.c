//Memoziation with C
#include <stdio.h>
#define MAX 100
int cache[MAX][MAX];
int main(){
	int fib=5;
	for(int i=1;i<fib;i++)
		printf("Fib of %d is %d\n",i,fibb(i));	
	return 0;
}
int fibb(int n){
	//check for 1 or 2
	if(n==1 || n==2)
		return 1;

	//check for pre existing 
	//making a dict. save corospoiding values..
	for(int i=0;i<n;i++){
		if(cache[0][i]==n){
			return cache[1][i];
		}
	}

	//calcuate rest and store the result for future use
	int temp=cache[n-1]+cache[n-2];
	cache[0][n]=temp;
	return cache[0][n];
}