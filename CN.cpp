#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int parity=0,num;
  	printf("enter the number");
  	cin>>num;
  	 while(num){
   		if(num&1)
   		parity=!parity;
     	num=num>>1;
   	}
   	if(parity)
  		cout<<"parity is odd";
 	else
 		cout<<"parity is even";
 	return 0;
 }