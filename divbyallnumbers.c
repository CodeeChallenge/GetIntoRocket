//number divisible by all number from 1 to 20.
#include <bits/stdc++.h>
int main(){
	int n=1;
	for(int i=2;i<10;i++){
		if(n%i!=0)
			{n++,i=0;}
	}
	printf("%d",n);
	return 0;
}