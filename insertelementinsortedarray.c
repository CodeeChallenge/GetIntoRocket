#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int Arr[]={3,5,7,9,11,13,15,0};
	int place,temp;
	scanf("%d",&place);
	for (int i = 0; i < 7; i++)
	{
		if(place<Arr[i])
		{
			temp=Arr[i];
			Arr[i]=place;
			place=temp;
		}
	}
	Arr[7]=place;
	for(int i=0;i<8;i++)
		printf("%d ",Arr[i]);
	return 0;
}