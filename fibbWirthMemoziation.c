//Finding factorial is easy but when we do this for larger number
//the program become super slow to resolve this ,
//we know fibb is just the sum of previous numbers
//so we will store the answer so the answer will be used 
//at the next factorial .

#include <stdio.h>
#define MAX 50
int cache[MAX][2];
int fibb(int n);
int main(){
	int fib=50;
	
	for(int i=0;i<fib;i++)
	{
		printf("\n");
		for(int j=0;j<2;j++)
		{
			cache[i][j]=-1;
		}
	}

	for(int i=1;i<fib;i++)
		printf("Fib of %d is %d\n",i,fibb(i));	
	printf("\n\n\n");
	return 0;
}
int fibb(int n){
	//check for 1 or 2
	if(n==1 || n==2)
		{
			cache[0][n]=n;
			cache[1][n]=1;
			return 1;
		}

	//check for pre existing 
	//making a dict. save corospoiding values..
	for(int i=0;i<n;i++){
		if(cache[0][i]==n){
			return cache[1][i];
		}
	}

	//calcuate rest and store the result for future use
	int temp;
	temp=cache[1][n-1] + cache[1][n-2];
	cache[0][n]=n;
	cache[1][n]=temp;
	return cache[1][n];
}