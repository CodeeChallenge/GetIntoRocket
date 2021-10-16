#include <bits/stdc++.h>
using namespace std;
vector<int> helper(string str){
	int x=0, y=0;
	int x1=0, x2=0;
	int n = str.size();
	for(int i=0;i<n;i++){
		if(str[i]=='L' || str[i]=='R'){
			if(x1)  continue;
			if(str[i] == 'L')   {x-=1;x1++;x2=0;}
			else   {x+=1;x1++;x2=0;}
		}
		else{
			if(x2)  continue;
			if(str[i] == 'U')  {y+=1;x2++;x1=0;}
			else  {y-=1;x2++;x1=0;}
		}
	}
	return {x,y};
}
int diff(int x,int y){
	return x-y;
}
int main(){
	vector<int> A{1,2,3,4,6,7,5,7,5,67,8,56,78};
	int B[A.size()];
	//cout<<accumulate(A.begin(),A.end(),0)<<endl;
	//cout<<accumulate(A.begin(),A.end(),0,diff);
	partial_sum(A.begin(),A.end(),B);
	for(int i : B){
		cout<<i<<" ";
	}
	return 0;
}