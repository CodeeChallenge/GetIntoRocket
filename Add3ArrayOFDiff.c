#include <stdio.h>
#include <stdlib.h>
int main()
{
	int A[10],B[3],C[8];
	srand(time(0));
	for(int i=0;i<10;i++)
		A[i]=rand()%100;
	for(int i=0;i<3;i++)
		B[i]=rand()%100;
	for(int i=0;i<8;i++)
		C[i]=rand()%100;

	for(int i=0;i<10;i++)
	   printf("%d ",A[i]);
	printf("\n");
	for(int i=0;i<3;i++)
	   printf("%d ",B[i]);
	printf("\n");
	for(int i=0;i<8;i++)
	   printf("%d ",C[i]);
	printf("\n");
	for(int i=0;i<10;i++)
	{
		if(i<3)
			A[i]=B[i]+A[i];
		if(i<8)
			A[i]=C[i]+A[i];
	}
	for(int i=0;i<10;i++)
	   printf("%d ",A[i]);
	return 0;
}