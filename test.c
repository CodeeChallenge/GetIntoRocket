#include <stdio.h>
#include <string.h>
struct {
	int a;
	char d[5];
	float e;
}Ayu;
int main()
{
	Ayu.a=1;
	strcpy(Ayu.d,"ayus");
	Ayu.e=1.0;
	printf("%d\n",sizeof(Ayu));
	free(A);
	return 0;
}
