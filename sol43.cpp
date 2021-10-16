//reverse a number
#include <stdio.h>
#include <math.h>
#include <limits.h>
bool isAnagram(char * s, char * t);
int main(){
	char s[]={"nagaram"};
	char t[]={"anagram"};
	printf("\n%d",isAnagram(s,t));
	return 0;
}
bool isAnagram(char * s, char * t){
	int Alpha[26]={0};
	int i=0;
	while(s[i]){
		Alpha[s[i++]-'a']++;
	}
	i=0;
	while(t[i]){
		Alpha[t[i++]-'a']--;
	}
	for(int i=0;i<26;i++){
		if(Alpha[i] != 0)
			return false;
	}
	return true;
}