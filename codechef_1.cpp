#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int ans = 0 ,N, A, B, K;
		cin>>N>>A>>B>>K;
		for(int i = 2;i<=N;i++){
			if((i%A==0) && (i%B==0))
				continue;
			if(!(i%A) || !(i%B))
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}