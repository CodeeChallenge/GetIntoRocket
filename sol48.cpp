#include <bits/stdc++.h>
using namespace std;
int main(){
	int testCase,n,m;
	scanf("%d",&testCase);
	while(testCase--){
		scanf("%d%d",&n,&m);
		int link[n+1]={0};
		for(int i=0;i<m;i++){
			int u=0,v=0;
			scanf("%d%d",&u,&v);
			link[v]++;
			link[u]++;
		}
		int max = INT_MIN,term;
		for(int i=1;i<=m;i++)
			if(max < link[i]){
				max = link[i];
				term = i;
			}
			cout<<endl<<"term="<<term<<" "<<"max="<<max<<endl<<endl;
	}
	return 0;
}