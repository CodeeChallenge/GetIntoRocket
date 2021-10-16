#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n,d;
	scanf("%d%d",&n,&d);
	int ans=0;
	int a=0;
	while(n>0)
	{
		a=n%10;
		if(a==d)
			ans++;
		n/=10;
	}
	printf("%d",ans);
	return 0;
}