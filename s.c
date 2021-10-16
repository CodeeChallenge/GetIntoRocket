#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
void mysort(int *data, int n); 
int get(int arr[],int n); 
int part(int arr[], int low, int high);
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}
int main() 
{ 
    int n ;
    scanf("%d",&n);
    int arr[n];
    srand(time(0)); 
    for(int i=0;i<n;i++)
      //scanf("%d",&arr[i]);
        arr[i]=rand()%1000;
    
  struct timespec begin, end;
   clock_gettime(CLOCK_MONOTONIC_RAW, &begin);

        mysort(arr, n); 
        mysort(arr, n); 
     clock_gettime(CLOCK_MONOTONIC_RAW, &end);

    printf ("Total time = %f seconds\n",(end.tv_nsec - begin.tv_nsec)/1000000000.0+(end.tv_sec  - begin.tv_sec));
   printf("\n");
   // for(int i=0;i<n;i++)
     // printf("%d ",arr[i]);
     
    return 0; 
}
void mysort(int *A, int n)
{
int i=0,wow=1;
for(;i<((n/2)-1);)
{
  if(A[i]>A[i+1])
  {
    swap(&A[i],&A[i+1]);
    i--;
  }
  else
  {
    wow+=1;
    i++;
    continue;
  }
  if(i==-1)
    i=wow;
}
}