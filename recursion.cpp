#include <stdio.h>
void fun1(int i,int n);
void fun2(int i,int n);
void fun1(int i ,int n){
	if(i>=n) return;
	else{
		printf("%d ",i+1);
		fun2(i+1,n);
	}
}
void fun2(int i ,int n){
	if(i>=n) return;
	else{
		printf("%d ",i-1);
		fun1(i+1,n);
	}
}

int main(){
	fun1(1,10);
	return 0;
}