#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int a,b,c=0;
	scanf("%d %d",&a,&b);
	while(a>1)
	{
		if(a%2!=0)
			c=c+a;
		a=a/2;
		b=b*2;
	}
	printf("%d",b+c);
	return 0;
}