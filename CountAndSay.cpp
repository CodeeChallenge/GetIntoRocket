#include<bits/stdc++.h>
using namespace std;
string nextString(string prev){
	int count = 1;
	string next;
	for(int i{};i<prev.size();i++){
		while(i+1 < prev.size() && prev[i] == prev[i+1]){
			count++;
		next += to_string(count) + prev[i]; 
		return next;
	}
}
string countAndSay(int n){
	string s = "1";
	while(--n){
		s = nextString(s);
	}
	return s;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s = countAndSay(n);
	return 0;
}