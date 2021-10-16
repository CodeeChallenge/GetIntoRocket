#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* longestCommonPrefix(char** strs, int n);
int main(){
	char *word[5]={"flower",
					"flow",
					"f"};
	char* ch=longestCommonPrefix(word,3);
	printf("%s",ch);
}
char* longestCommonPrefix(char** strs, int n){
	int small=strlen(strs[0]);
	for(int i=1;i<n;i++){
		if(strlen(strs[i]) < small)
			small = strlen(strs[i]);
	}
	char *S=(char*)malloc(small*sizeof(char));
	int s=0;
	int i1=0;
	for(int i=0;i<small;i++){
		for(int j=0;j<n-1;j++){
			if(strs[j][i] != strs[j+1][i])
				goto x;	
		}
		s++;
	}
	x:
	
	for(i1=0;i1<s;i1++)
		S[i1]=strs[0][i1];
	S[i1]='\0';
	return S;
}