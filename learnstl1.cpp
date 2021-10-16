#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 10
int find(char words[MAX][MAX],int n,char word1[MAX],char word2[MAX]);
int main(){
	char words[][8]={"Ayush","kapri","is","good","lol","lol","parrot","Ayush"};
	char word1[] = "Ayush";
	char word2[] = "lol";
	printf("%d",find(words,8,word1,word2));
	return 0;
}
int find(char words[MAX][MAX],int n,char word1[MAX],char word2[MAX]){
	int x, y;
	for(int i=0;i<n;i++){
		if(strcmp(words[i],word1))
			x = i;
		else if(strcmp(words[i],word2))
			y = i;
	}
	return abs(x-y);
}