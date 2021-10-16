#include <stdio.h>
#include <string.h>
#include <math.h>
int isValid(char s[]){
	char stack[100];
	int i=0,x=0;
	while(s[i]){
		if(s[i]=='{' || s[i]=='[' || s[i] == '('){
			stack[x]=s[i];
			x+=1;
		}
		else if (s[i]=='}' || s[i]==']' || s[i] == ')'){
			if(s[i]==stack[x])
				x-=1;
			else
				return 0;
		}
		i++;
	}
	return 1;
}
int main(){
	char s[100];
	gets(s);
	int x=isValid(s);
	printf("%d",x);
	return 0;
}