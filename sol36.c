#include <stdio.h>
#include <string.h>
char* findsubstring(char* strings[],int n);
int main(){
	char *strings[]={
		"flower",
		"flow",
		"flight"
	};
	int n=3;
	char *ch=findsubstring(strings,n);
	printf("%s",ch);
	return 0;
}
char* findsubstring(char* strings[],int n){
	//check if any is null
	for(int i=0;i<n;i++)
		if(strings[i][0] == '\0')
			return "";
	//print |
	//      ▼ 
	for(int i=0;i<n;i++){
		for(int j=0;j<strlen(strings[i]);j++){
			printf("%c ",strings[i][j]);
		}
		printf("\n");
	}	
	return "hi";
}