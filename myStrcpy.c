//strcpy 
#include <stdio.h>
#include <string.h>
void myStrcpy(char *B,char *A)
{
	while(*A!='\0')
	{
		*B=*A;
		 A++;
		 *B++;
	}
  *B='\0';
}
int main()
{
	char A[50],B[50];
	//never use gets while input because it will take [enter] also
	scanf("%s",A);
    myStrcpy(B,A);
    puts(B);
    printf("hi");
	return 0;
}