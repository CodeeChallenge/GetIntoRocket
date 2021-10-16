//ransome string
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 100
int findransom(char* str,char* ransomstring);
int main(){
    char str[MAX];
    char ransomstring[MAX];
    fgets(str,MAX,stdin);
    fflush(stdin);
    fgets(ransomstring,MAX,stdin);
    printf("%d",findransom(str,ransomstring));
    return 0;
}
int findransom(char* str,char* ransomstring){
    int Alpha[26]={0};
    int x1 = strlen(str);
    int x2 = strlen(ransomstring);   
    for(int i=0;i<x1;i++){
        Alpha[str[i]-'a']++;
    }
    for(int i=0;i<x2;i++){
        Alpha[ransomstring[i]-'a']--; 
        if(Alpha[ransomstring[i]-'a']<0)
            return 0;  
                }   
    return 1;
}