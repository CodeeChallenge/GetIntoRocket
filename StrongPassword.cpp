//strong password solution..
#include <stdio.h>
#include <string.h>
int main() {
int n;
scanf("%d",&n);
char A[n];
scanf("%s",A);
int as=0,ac=0,sp=0,di=0;  
int rem=0;
for(int i=0;i<strlen(A);i++)
{
	if((i[A]>='0') && (i[A]<='9'))
		di=1;
	if((i[A]>='A') && (i[A]<='Z'))
		ac=1;
	if((i[A]>='a') && (i[A]<='z'))
		as=1;
	if((i[A]=='-') || (i[A]=='+') ||(i[A]=='!') || \
		(i[A]=='@') || (i[A]=='#') || (i[A]=='$') ||(i[A]=='%') || (i[A]=='^') ||(i[A]=='&') || (i[A]=='*') ||(i[A]=='(') || (i[A]==')') )
		sp=1;		
}
	if(((di) && (as) && (ac) && (sp)))
	{
		if(strlen(A)<6)
			printf("%d",6-strlen(A));
		else if(strlen(A)>=6)
			printf("0");
	}	
	else
	{
		if(!di)
			rem++;
		if(!as)
			rem++;
		if(!ac)
			rem++;
		if(!sp)
			rem++;
		if(strlen(A)>6)			
			printf("%d",rem);
		else
			{
				if(rem<(6-strlen(A))
					printf("%d",(6-strlen(A));
				else
					printf("%d",rem);		
			}
	}	
return 0;
}