#include <stdio.h>
int total_cost(int* cost,int* distance,int n);
int main(){
	int n;
	scanf("%d",&n);
	int cost[n],distance[n];
	for(int i=0;i<n;i++)
		scanf("%d",&cost[i]);
	for(int i=0;i<n;i++)
		scanf("%d",&distance[i]);
	printf("Total cost is =%d ",total_cost(cost,distance,n));
	return 0;
}
int total_cost(int* cost,int* distance,int n){
	int total=0,min=cost[0],i=0;
	//finding min cost of fuel.
	for(int v=1;v<n;v++)
		if(cost[v]<min)
			min=cost[v];

	for(i=0;i<n-1;i++){
		if(cost[i] > cost[i+1]){
			total += (distance[i]*cost[i]);
		}
		else{
			if(cost[i] == min){
				for(int k=i;k<n;k++)
					total += distance[k] * cost[i];
				break;
			}
			else{
				for(int m = i+1 ; m<n; m++){
					if(cost[i] < cost[m])
						total += (distance[m]*cost[i]);
					else
						break;
				}
			}
		}
	}
	if(i==n-1)
		total += (distance[n]*cost[n]);
	return total;
}