#include <stdio.h>
#include <string.h>
int balancedString(char * s);
int main(){
	char str[]={"WWEQERQWQWWRWWERQWEQ"};
	printf("%d",balancedString(str));
	return 0;
}
int balancedString(char * s){
	int target = strlen(s)/4;
	char test[] = {'Q','W','E','R'};
	int i=0;
	int a=0,b=0,c=0,d=0;
	while(s[i]){
		if(s[i] == 'Q')
			a++;
		else if (s[i] == 'W')
			b++;
		else if(s[i] == 'E')
			c++;
		else if(s[i] == 'R')
			d++;
		i++;			
	}
	int aim = 0;
	if(a < target)
		aim += target - a;
	if(b < target)
		aim += target - b;
	if(c < target)
		aim += target - c;
	if(d < target)
		aim += target - d;
	
	printf("Q W E R \n%d %d %d %d \n",a,b,c,d);
	return aim;
}