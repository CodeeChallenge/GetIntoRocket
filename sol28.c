#include <bits/stdc++.h>
using namespace std;
int findTurns(int pages,int target);
int main(){
	int pages,target;
	cin>>pages;
	cin>>target;
	int turns=findTurns(pages,target);
	printf("%d",turns);
	return 0;
}
int findTurns(int pages,int target){
	if(target == 1){
		return 0;
	}
	
	if(pages % 2 == 0){
		if(target == pages)
			return 0;
	}
	else {
		if(target == pages || target == pages - 1)
			return 0;
	}

	int front=0,last=0;
	front = target / 2;
	last = ( pages - target )/2;
	if(pages % 2 == 0 && target %2 != 0)
		last++;
	if(last > front)
		{
		return front;
	}
	else{
		return last;
	}
}	