#include <stdio.h>
#include <stdlib.h>
int mystr(char *A)
{
	int len=0;
	while(*A!='\0')
		{
		 len++;
		 A++;
		}
	return len-1;
}
int main()
{
	char A[500];
	fgets(A,500,stdin);
	printf("%d",mystr(A));
	return 0;
}