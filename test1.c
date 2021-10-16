//generating random numbers in C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	srand(time(0));		//srand() is use to initilize new values each time it is called 
						//otherwise it will generate same numbers. 
						//time(0) it is use to intitilize time to pass the current runtime 
						//to generate random values.
	int A[4];
	for(int i=1;i<=4;i++)
		A[i-1]=(rand()%i)+10;    //

	for(int i=0;i<4;i++)
		printf("%d ",A[i]);
	return 0;
}