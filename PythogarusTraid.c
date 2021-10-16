#include <stdio.h>
int fun(int x,int y,int z)
{
	if(!((x<y) && (y<z)))
		return 0;
	z=(z*z);
	x=(x*x);
	y=(y*y);
	if(z==(x+y))
		return 1;
	return 0;
}
int main()
{
	int n1,n2,n3;
	scanf("%d%d%d",&n1,&n2,&n3);
	int res=fun(n1,n2,n3);
	printf("\n%d",res);
	return 0;
}