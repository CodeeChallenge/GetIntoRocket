#include <stdio.h>
int main()
{
	int A[3][3];
	for(int i=0;i<3;i++)
	   for(int j=0;j<3;j++)
	   		A[i][j]=rand()%1000;

	  for(int i=0;i<3;i++)
	  {
	  	printf("\n");
	       for(int j=0;j<3;j++)
	  	     printf("%d ",A[i][j]);	   	
	  }
	  for(int i=0;i<3;i++)
	   for(int j=0;j<i;j++)
	  	  {
	  	  	int temp=A[i][j];
	  	  	A[i][j]=A[j][i];
	  	  	A[j][i]=temp;
	  	  }
	  	  printf("\n");
	  for(int i=0;i<3;i++)
	  {
	  	printf("\n");
	       for(int j=0;j<3;j++)
	  	     printf("%d ",A[i][j]);	   	
	  }
	return 0;
}