#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a{16,52,3,214,75,986};
	vector <int> ::iterator i1 =a.begin();
	//for(;i1!=a.end();i1++)
	//	cout<<*i1<<endl;

	//sort(a.begin(),a.end());
	//i1 = a.begin();
	a.push_back(2);
	for(;i1!=a.end();i1++)
		cout<<*i1<<endl;
	
	return 0;
}