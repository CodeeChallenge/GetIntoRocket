//Square every single digit! and return int 
   //911 -> 8111
   //44  -> 1616
#include <stdio.h>
#include <string.h>
int sqno(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",sqno(n));
	return 0;
}
int sqno(int n){
	unsigned long long int a = 0;
	//reverse no
	int m = 0;
	while(n){
		m = m*10 + (n%10); 	
		n /= 10;
	}
	while(m){
		int x = (m%10) * (m%10);
		while(x){
			a*=10;
			x/=10;
		}
		a += ((m%10)*(m%10));
		m/=10;
	}
	return a;
}