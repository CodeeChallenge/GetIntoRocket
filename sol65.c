#include <stdio.h>
#include <limits.h>
int main(){
	int n,m, count = 0;
	scanf("%d",&m);
	while(m--){
	    count = 0;
	scanf("%d",&n);
	int prices[n];
	for(int i=0;i<n;i++){
		scanf("%d",&prices[i]);
	}
	int values[5]={INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX};
	for(int i=0;i<n;i++){
		if(values[0] > prices[i]){
			count++;
			values[4] = values[3];
			values[3] = values[2];
			values[2] = values[1];
			values[1] = values[0];
			values[0] = prices[i];
		}
		else if(values[1] > prices[i]){
			values[4] = values[3];
			values[3] = values[2];
			values[2] = values[1];
			values[1] = prices[i];	
		}
		else if(values[2] > prices[i]){
			values[4] = values[3];
			values[3] = values[2];
			values[2] = prices[i];
		}
		else if(values[3] > prices[i]){
			values[4] = values[3];
			values[3] = prices[i];
		}
		else if(values[4] > prices[i]){
			values[4] = prices[i];
		}
	}
	printf("%d\n",count);}
	return 0;
}