#include <stdio.h>
#include <math.h>
int findthis(int pages,int target);
int main(){
	int target, pages, turns;
	scanf("%d %d",&pages,&target);
	turns = findthis(pages,target);
	printf("%d",turns);
	return 0;
}
int findthis(int pages,int target){
	int start, end;
	if(target <= pages/2){
		start = 1, end = target;
	}
	else
		start = target, end = pages;
	if(start % 2 != 0 && end % 2 == 0){
		return ((end - start)/2)+1;
	}
	else
		return (end - start)/2;
}