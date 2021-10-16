#include <bits/stdc++.h>
using namespace std;
char* substring(char* str,int from,int n);
int largestSubString(char *str,char *sub);
int main(){
	int test;
	cin>>test;
	while(test--){
	char str[100000];
	cin>>str;
	int n=strlen(str);
	int words=0;
	for(int i=1;i<n;i++)
		{char *sub=substring(str,i,strlen(str));
		words += largestSubString(str,sub);
	}
	printf("%d\n",words+n);
	}
	return 0;
}
int largestSubString(char *str,char *sub){
	int i=0;
	while(sub[i]){
		if(str[i] == sub[i]){
			i++;
		}
		else
			break;
	}
	return i;
}
char* substring(char* str,int from,int n){
	char* sub=(char*)malloc(sizeof(str));
	int x=0;
	for(int i=from;i<n;i++)
		sub[x++] = str[i];
	sub[x]='\0';
	return sub;
}