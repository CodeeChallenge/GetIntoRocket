//give me 5
#include <stdio.h>
int givemefive(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",givemefive(n));
	return 0;
}
int givemefive(int n){
	//return 1 if 5 occured and -1 if not.
	while(n){
		if(n%10 == 5)
			return 1;
		n/=10;
	}
	return -1;
}