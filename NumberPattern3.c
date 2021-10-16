#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int loop,x;
	scanf("%d",&loop);
	x=loop;		
	while(x>0)
	{
		printf("%d+ ",loop);
		loop=loop*loop;
		x--;
		if(x<=0)
			break;
		printf("%d- ",loop);
		loop=loop*loop;
		x--;
	}
	return 0;
}