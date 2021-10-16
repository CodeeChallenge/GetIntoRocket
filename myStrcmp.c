//MyStrcmp with vectors
int MyStrcmp(char *A,char *B)
{
	while(*A!='\0' || *B!='\0')
	{
		if((*A)>(*B))
			return (*A)-(*B); 	
		else if((*A)<(*B))
			return (*A)-(*B);
			A++,B++;
	}
	return 0;
}
#include <string.h>
#include <stdio.h>
int main()
{
	char A[50],B[50];
	fgets(A,50,stdin);
	fgets(B,50,stdin);
	//printf("%d\n",strcmp(A,B));
	printf("%d",MyStrcmp(A,B));
	return 0;
}