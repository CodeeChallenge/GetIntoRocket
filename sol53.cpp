#include <bits/stdc++.h>
using namespace std;
int findnum(int* nums,int n,int tar);
int main(){
	int nums[]={1,3,5,7};
	int n = sizeof(nums)/sizeof(nums[0]);
	printf("pos = %d",findnum(nums,n,9));
	return 0;
}
int findnum(int* nums,int n,int tar){
	int s=0,e=n-1,m;
	if(tar < nums[0])
		return 0;
	else if(tar > nums[n-1])
		return n;
	while(s<e){
		printf("%d %d\n",s,e);
		m = (s+e)/2;
		if(nums[m] == tar)
			return m;
		else if(nums[m] < tar && nums[m+1] > tar)
			return m+1;
		else if(nums[m] > tar)
			e = m;
		else if (nums[m] < tar)
			s = m;
	}
}