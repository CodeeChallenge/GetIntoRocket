//find diff b/w longest and shortest string in 2d strings.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
int strdiff(char** p,int n);
int main(){
	int n;
	scanf("%d",&n);
	char *p[n];
	for(int i=0;i<n;i++){
		fflush(stdin);
		scanf("%s",p+i);
	}
	printf("%d ",strdiff(p,n));
	return 0;
}
int strdiff(char** p,int n){
	int i = 0, max = INT_MIN, min = INT_MAX; 
	while(i < n){
		if(strlen(p[i]) > max)
			max = strlen(p[i]);
		if(strlen(p[i]) < min)
			min = strlen(p[i]);
		i++;
		}
		return max - min;
	}