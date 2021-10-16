#include <stdio.h>
#include <string.h>
int testfunc(char* str,int n);
int main(){
    char str[100000];
    fgets(str,100000,stdin);
    int testcase;
    scanf("%d",&testcase);
    int n;
    while(testcase--){
      scanf("%d",&n);
      if(testfunc(str,n))
         printf("YES\n");
      else
         printf("NO\n");   
    }
    return 0;
}
int testfunc(char* str,int tar){
    int alpha[26]={0};
    int i=0;
    while(str[i]){
        alpha[str[i]-'a']++;
        i++;
    }
    for(int i=0;i<26;i++){
    		printf("%d ",alpha[i]);
    }
    printf("\n");
    int needed;
    for(int i=0;i<26;i++){
        if(alpha[i]){
            needed = tar/(i+1);
    		printf("char= %c needed =%d alpha[] =%d\n",str[i],needed,alpha[i]);
            if(alpha[i] >= needed)
                 return 1;
        }
    }
        return 0;
    }