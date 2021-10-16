//Replace each char to number equivalent  in a sting 
  // abc -> 123
  // zoo -> 261515
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int* Replace(char* str);
int main(){
	char str[100];
	scanf("%s",str);
	int* p = Replace(str);
	for(int i = 0;i < strlen(str);i++){
		printf("%d",*p+i);
	}
	return 0;
}
int* Replace(char* str){
	int i=0;
	int *nums = (int*)malloc(sizeof(int)*strlen(str));
	while(str[i]){
		nums[i]=(str[i]-'a');
		nums[i++]++;
	}	
	return nums;
}