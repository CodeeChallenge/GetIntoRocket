#include <stdio.h>
#include <math.h>
//getting out of multiple loops
int main(){
	int n=500,exit=0;
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			for(int k=1;k<n;k++){
				if(i*i + j*j + k*k == 1000){
					printf("%d %d %d ",i,j,k);
					exit=1;
					break;
				}
			}
			if(exit==1)
				break;
		}
		if(exit==1)
			break;
	}
	return 0;
}