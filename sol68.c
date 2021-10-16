#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<50;i++){
		printf("%i = %.100f\n",i,(double)(sqrt(i)*sqrt(i)));
	}
	return 0;
}