//my algorithm to generate a random function between any two numbers....
#include <stdio.h>
int main()
{
	unsigned int n;
	n=&n;
	int lwr,hgh;
	scanf("%d%d",&lwr,&hgh);
	if(lwr==hgh)
		{
			printf("%d",lwr);
			goto a;
		}
	while(((n/10) >= lwr) || ((n*10<=hgh) && (n/10>=lwr)))
	{
		n/=10;
	}
	printf("\n%d",n);
	a:
	return 0;
}