//sum of numbers that are either div by 3 or 5 under 1000
#include <stdio.h>
int main(){
	int x=0;
	int n=999;
	while(n){
		if (n%3==0 || n%5==0)
			x+=n;
		n--;
	}
	printf("%d",x);
	return 0;
}