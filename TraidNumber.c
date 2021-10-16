#include <stdio.h>
int fun(int n1,int n2,int n3)
{
	if((n1<=99)||(n1>=1000))
		return 0;
	if((n2<=99)||(n2>=1000))
		return 0;
	if((n3<=99)||(n3>=1000))
		return 0;
	if(n2!=2*n1)
		return 0;
	if(n3!=3*n1)
		return 0;
	return 1;
}
int main()
{
	int n1,n2,n3;
	scanf("%d%d%d",&n1,&n2,&n3);
	int res=fun(n1,n2,n3);
	printf("\n%d",res);
	return 0;
}