#include <stdio.h>
#include <math.h>
int nextsquare(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",nextsquare(n));
	return 0;
}
int nextsquare(int n){
	//manage non squares
	int x = sqrt(n);
	if(x*x != n)
		return -1;
	return (sqrt(n)+1)*(sqrt(n)+1);
}