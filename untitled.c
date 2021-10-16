//1D pointer ..
//2D pointer ..
//2D pointer with array
#include <stdio.h>
int main()
{
	int (*p)[5];
	int n;
	scanf("%d",&n);
	p=(int(*)[5])malloc(n*5*sizeof(int));
	for(int i=0;i<n;i++)
		for(int j=0;j<5;j++)
			scanf("%d",((p+i)+j));
		for(int i=0;i<n;i++)
			for(int j=0;j<5;j++)
				printf("%d ",(((*p)+i)+j));
	return 0;
}