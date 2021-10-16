//prime factors of number n
#include <stdio.h>
int prime_memo(int n);
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
		if(prime_memo(i))
			printf("%d ",i);
	return 0;
}
int prime_memo(int n){
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else{
		for(int i=2;i<n;i++)
			if(n%i==0)
				return 0;
		return 1;	
	}
}