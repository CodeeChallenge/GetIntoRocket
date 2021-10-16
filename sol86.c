#include <stdio.h>
#include <limits.h>
int main(){
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int keyboard[a],mouse[b];
	for(int i=0;i<a;i++)
		scanf("%d",&keyboard[i]);
	for(int i=0;i<b;i++)
		scanf("%d",&mouse[i]);
	int e, max = -1;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			e = keyboard[i] + mouse[j];
			if(max < e && e <= n){
					max = e;
			}
		}
	}
	printf("%d",max);
	return 0;
}