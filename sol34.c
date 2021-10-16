//amalgam or not
#include <stdio.h>
#include <string.h>

#define MAX 100
int checkAmalgam(char* str1,char* str2);
int main(){
	char str1[MAX],str2[MAX];
	printf("Enter String1\n");
	scanf("%s",str1);
	printf("Enter String2\n");
	scanf("%s",str2);
	printf("\n%d",checkAmalgam(str1,str2));
	return 0;
}
int checkAmalgam(char* str1,char* str2){
	if(strlen(str1) != strlen(str2))
		return 0;
	int i=0;
	int Alpha[26]={0};
	while(str1[i]){
		Alpha[str1[i]-'a']++;
		i++;
	}
	i=0;
	while(str2[i]){
		Alpha[str2[i]-'a']--;
		i++;
	}
	for(int i=0;i<26;i++)
		if(Alpha[i] != 0)
			return 0;
	return 1;
}