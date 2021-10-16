#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int loop=1,x=0,n;
	scanf("%d",&n);		
	while(loop<=n)
	{
		printf("%d ",loop);
		x=x+1;
		loop+=x;
		if(loop<=n)
			printf("+");
	}
	return 0;
}