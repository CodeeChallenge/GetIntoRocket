#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char* charexcel(int n);
int main(){
	int n =52;
	char * ch = charexcel(n);
	printf("%s",ch);
	return 0;
}
char* charexcel(int n){
	int lc = n%26;
	int la = n/26;
	char* word = (char*)malloc(sizeof(char)*(la+2));
	if(n%26==0){
		lc = 26;
		la --;
	}  
	int x =0;
	while(la>0){
		word[x++] = 'A';
		la--;
	}
	word[x++] = 'A' + (lc-1);
	word[x++] = '\0';
	return word; 
}