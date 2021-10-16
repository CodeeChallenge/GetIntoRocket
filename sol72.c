//strong password

 //len >=6
 //1 no atleast
 //1 lower atleast
 //1 upper atleast
 //1 special atleast
  //find no of char to add more
#include <stdio.h>
#include <string.h>
int findaddmore(char* str,int n);
int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    fflush(stdin);
    fgets(str,n,stdin);
    printf("%d",findaddmore(str,n));
    return 0;
} 
int findaddmore(char* str,int n){
    int lwr = 0, upr = 0, spc = 0, no = 0;
    for(int i=0;i<n;i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            lwr++;
        else if(str[i]>='A' && str[i]<='Z')
            upr++;
        else if(str[i]>='0' && str[i]<='9')
            no++;
        else if(str[i] == '!' || str[i] == '@' || str[i] == '#'\
            || str[i] == '$'|| str[i] == '%'|| str[i] == '^'\
            || str[i] == '&'|| str[i] == '*')
            spc++;
    }
    int needed = 4;
    if(spc != 0)
    	needed --;
    if(upr != 0)
    	needed --;
    if(lwr != 0)
    	needed --;
    if(no != 0)
    	needed --;
    printf("%d\n",needed);
    return strlen(str)>=6 ? needed : (6-n) + needed;
}