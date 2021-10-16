//make a class template ..for sorting and printing all values in DS.
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Sortt{
public:
	vector<T> sorting(vector<int> v){
		sort(v.begin(),v.end());
		return v;
	}
	void print(vector<T> v){
		for(auto i : v){
			cout<<i<<" ";
		}
	}
};
int main() {
	vector<int> v = {1,2,7,4,5};
	Sortt<int> a;
	v = a.sorting(v);
	a.print(v);
	return 0;
}
