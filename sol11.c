#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check(char *str);
int main()
{
    char str[1001];
    fgets(str,1001,stdin);
    int n=strlen(str);
    int x=abs(str[0]-str[n-1]);
    for(int i=0;i<n/2;i++){
    	if(x!=abs(str[i]-str[n-i-1])){
    		printf("Not funny");
    		return 0;
    	}
    }
    printf("funny");
return 0;
}