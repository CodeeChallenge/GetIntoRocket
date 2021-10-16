#include <stdio.h>
#include <math.h>
int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		int diff =abs(a-b),ans =0;
			ans = ans + diff/5;
			diff = diff % 5;
			ans = ans + diff/2;
			diff = diff % 2;
		printf("%d\n",ans + diff);
	}
	return 0;
}