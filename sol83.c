#include <stdio.h>
int main(){
	int n,no,x=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&no);
		if(no == 1){
			printf("HARD");
			x = 1;
			break;
		}
	}
	if(x == 0)
		printf("EASY");
	return 0;
}