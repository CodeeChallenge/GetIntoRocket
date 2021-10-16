//digital it up!
#include <stdio.h>
int findonce(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",findonce(n));
	return 0;
}
int findonce(int n){
	int x = 0;
	while(n){
		if(n%2 != 0)
			x++;
		n/=2;
	}
	return x;
}