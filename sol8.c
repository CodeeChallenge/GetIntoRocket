//linked list
   //reverse and pop(by position and item) 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * reverseWords(char * ch);
int main(){
	char ch[]={"Let's take LeetCode contest"};
	reverseWords(ch);
	printf("\n%s",ch);
	return 0;
}
char * reverseWords(char * ch){
	if(ch[0] == '\0')
		return "";
	if(ch[0] ==' ' && ch[1] =='\0')
		return " ";
	int start = 0 ,end = 0;
	while(ch[end]){
		if(ch[end] == ' ')
		{
			for(int i=start;i<end/2;i++){
				char temp = ch[i];
				ch[i] = ch[end-1-i];
				ch[end-1-i] = temp;
			}
			start = end-1;
		}
		end++;
	}
	return ch;
}