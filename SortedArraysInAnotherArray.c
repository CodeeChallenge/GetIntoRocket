#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	
	int x=0,y=0;
	int A[5],B[5];
	srand(time(0));
	for(int i=0;i<5;i++)
		{
			A[i]=rand()%100;
			B[i]=rand()%100;
		}
 int C[10]={0};
for(int i=0;i<10;i++)
{
	if(A[x]>B[y])
		{
			C[i]=B[y];
		if(y==5)
			continue;
			y++;
		}
	else
		{C[i]=A[i];
			if(x==5)
			continue;
			x++;
		}
}
for(int i=0;i<5;i++)
	printf("%d ",A[i]);
printf("\n");
for(int i=0;i<5;i++)
	printf("%d ",B[i]);
printf("\n");
for(int i=0;i<10;i++)
	printf("%d ",C[i]);
	return 0;
}