#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	string str;
	cin>>n;
	cin.ignore(1);
	getline(cin,str);
	int one = count(str.begin(),str.end(),'n');
	int zero = count(str.begin(),str.end(),'z');
	while(one--){
		cout<<"1 ";
	}
	while(zero--){
		cout<<"0 ";
	}

	return 0;
}