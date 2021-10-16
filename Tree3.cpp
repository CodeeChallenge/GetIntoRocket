#include <bits/stdc++.h>
using namespace std;
void initilizer(map<char,int>& m ,char* str){
	for(int i = 0 ;i<strlen(str)-1;i++){
		int j = i+1;
		if((str[i] == str[j]) && (m.)){

		}
	}
}
int main(){
	char str[10];
	cin.get(str,INT_MAX);
	map<char,int> m;
	for(int i =0;i<strlen(str);i++){
		m.insert({str[i],-1});
	}
	initilizer(m,str);
	
	return 0;
}