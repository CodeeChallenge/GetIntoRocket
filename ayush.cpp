#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n],B[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int j=0;j<n;j++)
		cin>>B[j];
	int t,t2;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i]>A[j])
				{t=A[i];
				A[i]=A[j];
				A[j]=t;
		
				t2=B[i];
				B[i]=B[j];
				B[j]=t2;
			}		
		}
	}
	int cost=0,i=0;
	for(int i=0;i<5;i++)
	{
		if(cost+A[i]>20)
		  break;
		  cost+=A[i];
	}
	cout<<"\n"<<cost;
	return 0;
}











