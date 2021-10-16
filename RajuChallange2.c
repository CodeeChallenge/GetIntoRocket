#include <stdio.h>
#include <string.h>
int main(){
	char A[50];
	fgets(A,50,stdin);
	int x=0;
	x=strlen(A);
	printf("%d",x);
	return 0;
}