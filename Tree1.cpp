//visualise array as binary search tree
#include <bits/stdc++.h>
using namespace std;
#define MAX 21
int main(int argc, char const *argv[])
{
	int Tree[MAX];
	//[ 5, 2, 8, 1,-1,-1,-1,-1,-1,-1,-1]
	//  1  2  3  4  5  6  7  8  9  10 11
	for(int &i :Tree)
		i = -1;
	int n,item,curr = 1;
	cin>>n;
	while(n--){
		cin>>item;
		curr = 1;
		while(1){
			if(Tree[curr] == -1){
				Tree[curr] = item;break;
			}
			else if(Tree[curr] > item)
				curr = curr*2;
			else
				curr = (curr*2)+1;
		}
	}
	int find = 8;
	for(int i = 1;i<MAX;){
		if(Tree[i] != -1){
			if(Tree[i] == find){
				cout<<"Found\n";
				break;
			}
			if(Tree[i] < find)
				i = (i*2)+1;
			else
				i = i*2;
		}
	}
	return 0;
}