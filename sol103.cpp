#include <stdio.h>
#include <string.h>
void largestWord(char *sen) {
  char word[200]="";
  char buff[200]="";
  int n=0,i;
  for(i=0;i<strlen(sen);i++)
  {
      if((sen[i]>=97 && sen[i]<=122)||(sen[i]>=65 && sen[i]<=90)||(sen[i]>=48 && sen[i]<=57))
        buff[n++]=sen[i];
      else
        n=0;// Reset for next word
      if(strlen(buff)>strlen(word))
        strcpy(word,buff);
  }
  printf("%s",word);
}
int main(void) {
    char sen[200];
    scanf("%[^\n]s",sen);
    largestWord(sen);
    return 0;
}