#include <bits/stdc++.h>
using namespace std;
//calculator
int check(char* str,int n);
int main(){
	char str[]={"{{{"};
	int n =strlen(str);
	printf("%d",check(str,n));
	return 0;
}
int check(char* str,int n){
	char stack[n];
	int ci = -1;
	for(int i=0;i<n;i++){
		if(str[i] == '(' || str[i] == '{' || str[i] == '[')
			stack[++ci] = str[i];
		else if(str[i] == ')' || str[i] == '}'|| str[i] == ']')
			if(ci == -1)
				return 0;
		else if(str[i] == ')')	if(stack[ci] == '(')	ci--;
		else if(str[i] == '}')	if(stack[ci] == '{')	ci--;
		else if(str[i] == ']')	if(stack[ci] == '[')	ci--;
		}
		if(ci == -1)
			return 1;
		else
			return 0;
}