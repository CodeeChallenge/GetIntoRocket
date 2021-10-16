#include <bits/stdc++.h>
using namespace std;
int main(){
	int num[26];
	string A;
	cin>>A;
	for(int i=0;i<26;i++)
		cin>>num[i];
	int x;
	x=A[0]-'a';
	for(int i=1;i<strlen(A);i++)
		if(A[i]-'a'>x)
			x=A[i]-'a';
	printf("\n%d",x*x);
	return 0;
}