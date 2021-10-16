#include <stdio.h>
int fact(int n,int sum){
	if(n==1)
		return sum;
	else
		fact(n-1,sum+n);
}
int main(){
	int x;
	x=fact(5,0);
	printf("%d",x);
}