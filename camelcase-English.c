#include <bits/stdc++.h>
using namespace std;
int findwords(char *str,int n);
int main(){
	char str[100000];
	fgets(str,100000,stdin);
	int n =  strlen(str);
		int words = findwords(str,n);
		printf("%d",words);
	return 0;
}
int findwords(char *str,int n){
	int i=0,words=0;
	while(str[i]){
		if(str[i] >= 'A' && str[i] <='Z')
			words++;
	}
	return ++words;
}
