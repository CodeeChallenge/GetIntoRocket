//change the values by actual arguments
#include <stdio.h>
void fun(int*,int*,int *,int *,int *,int *);
int main()
{
	int a=4,b=8,add=0,s=0,m=1,d=1;
	fun(&a,&b,&add,&s,&m,&d);
	printf("add- %d sub- %d mul- %d div %d",add,s,m,d);
	return 0;
}
void fun(int *a,int *b,int *add,int *s,int *m,int *d)
{
	(*add)=(*a)+(*b);
	(*s)=(*a)-(*b);
	(*m)=(*a)*(*b);
	(*d)=(*a)/(*b);
}