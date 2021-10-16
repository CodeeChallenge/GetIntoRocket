#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	char choice;
	int Arr[5]={6,7,4,3,2};
	for(int i=0;i<5;i++)	
		printf("%d ",Arr[i]);
	printf("\n");
	do
	{
		printf("enter the choice (right/left)");
		scanf("%c",&choice);
		fflush(stdin);
		if(choice=='r'||choice=='R')
			{
				int temp=Arr[0];
				for(int i=1;i<5;i++)
					Arr[i-1]=Arr[i];
				Arr[4]=temp;
			}	
		if(choice=='l' || choice=='L')
		{
			int temp=Arr[4];
			for(int i=4;i>0;i--)
				Arr[i]=Arr[i-1];
			Arr[0]=temp;
		}	
	for(int i=0;i<5;i++)	
		printf("%d ",Arr[i]);
		printf("\ncontinue ..1/0");
		int a=0;
		scanf("%d",&a);
		fflush(stdin);
	}while(a);
	return 0;
}