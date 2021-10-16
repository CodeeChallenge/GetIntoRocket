#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int anagram(char* string,int n);
int main(int argc, char const *argv[])
{
    char string[10000];
    int n;
    scanf("%d",&n);
    while(n--){
    scanf("%s",&string);
    fflush(stdin);
    printf("%d\n",anagram(string,strlen(string)));
    }    
    return 0;
}
int anagram(char* string,int n){
    // for n odd
    if(n%2 != 0)
        return -1;
    int Alpha[26]={0};
    for(int i=0;i<n/2;i++)
        Alpha[string[i]-'a']++;
    for(int i=0;i<n/2;i++){
        if(Alpha[string[i+(n/2)]-'a'])
            Alpha[string[i+(n/2)]-'a']--;
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(Alpha[i])
            c+=Alpha[i];
    }
        return c;
}