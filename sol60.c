//paskel triangle
//import for machine model 4
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
void strdiff(int n);
int main(){
	int n;
	scanf("%d",&n);
	strdiff(n);
	return 0;
}
void strdiff(int n){
	unsigned long long int a = 1, l = 1; 
	int* ptr[n];
	int i = 1;
	while(n--){
		ptr[i] = (int*)malloc(sizeof(int)*i);
		l = a;
		int x = 0;
		while(l){
			ptr[i][x++] = l%10;
			l/=10;
		}
		printf("%lld\n",ptr[i][2]);
		a*=11;
	}	
}