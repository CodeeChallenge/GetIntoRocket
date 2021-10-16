#include <stdio.h>
int questient(int a,int b)
{
	if(a>=b)
	{
		a-=b;
		printf("%d %d\n",a,b);
		questient(a,b);
	}
	else 
	return a;
} 
int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d%d",&a,&b);
	int ans=questient(a,b);
	printf("%d",ans);
	return 0;
}