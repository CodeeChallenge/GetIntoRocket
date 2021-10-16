#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,eve = 0;
	cin>>n;
	n%2 ? eve = 1 : eve = 0;
	n--;
	while(n){
		if(n>=2){
			n-=2;
			cout<<"I hate that I love that ";
		}
		else{
			cout<<"I hate that ";
			break;
		}
	}
	eve?cout<<"I hate it":cout<<"I love it";
	return 0;
}