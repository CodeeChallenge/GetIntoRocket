#include <stdio.h>
int main()
{
	char A[100]={'A','Y','U','S','H'},B[100]={'A','Y','U','S','H'};
	char e;
	for(int i=0;i<6;i++)
	{
		if(A[i]!=B[i])
			{
				e=A[i];
				goto d;
			}
	}
	d:
	for(int i=0;i<6;i++)
	{
		if(e==A[i])
		{
			if(A[i]!=B[i])
				printf("NO");
			else 
				printf("YES");
	}
}
return 0;
}