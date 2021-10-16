#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() 
{
  char A[100], B[100];
  int moves=0, same = 0;
  scanf("%s",A);
  fflush(stdin);
  scanf("%s",B);
  scanf("%d", &moves);
  if (strcmp(A, B))
  {
    printf("Yes");
    goto last;
  }
  for (int i = 0; i < strlen(A); i++) {
    if (A[i] != B[i])
      	break;
    same++;
  }
  printf("hello ayush %d\n",same);
  int n1, n2;
  n1 = strlen(A) - same;
  n2 = strlen(B) - same;
  if (abs(n1 + n2) <= moves)
    printf("Yes");
  else
    printf("No");
last:
  return 0;
}