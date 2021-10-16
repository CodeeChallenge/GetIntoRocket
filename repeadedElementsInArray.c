#include <stdio.h>
#include <time.h>
int main()
{
	srand(time(0));
	int A[3][3],x=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&A[i][j]);
			//A[i][j]=rand()%1000;
	for(int i=0;i<3;i++)
	{	for(int j=0;j<3;j++)
		{    for(int k=0;k<3;k++)
				{
					if(A[i][j]==A[i][k])
						x++;
				}
			}
	}	
for(int i=0;i<3;i++)
		{printf("\n");
			for(int j=0;j<3;j++)
			printf("%d ",A[i][j]);}
if(x==9)
	printf("good");
else
	printf("bad");

	return 0;
}