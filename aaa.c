#include <stdio.h>
int main()
{
	char A[50];
	fgets(A,50,stdin);
	int i=0;
	while(A[i]!='4')
	{
		printf("%c",A[i]);
	i++;
	}
	return 0;
}