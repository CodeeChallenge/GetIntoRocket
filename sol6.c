#include <bits/stdc++.h>
using namespace std;
int main(){
	char s1[101];
	cin>>s1;
	int n=strlen(s1);
	int x=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			{if(i==j)
				continue;
			if((s1[i]==(s1[j]-1))|| (s1[i]==(s1[j]+1)))
				break;
			if(j==n-1)
				cout<<s1[i];
	}
}
	return 0;
}