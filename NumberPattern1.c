#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int loop=1,x,n;
	scanf("%d",&n);
	x=n;		
	while(x--)
	{
		printf("%d+",loop);
		loop=((loop*10)+1);
	}
	return 0;
}