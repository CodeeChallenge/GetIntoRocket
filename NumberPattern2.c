#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int loop=1,x;
	scanf("%d",&loop);
	x=loop;		
	while(x--)
	{
		printf("%d+",loop);
		loop*=loop;
	}
	return 0;
}