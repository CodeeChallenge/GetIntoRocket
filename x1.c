#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
void mysort(int *data, int n); 
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
        arr[i]=rand()%1000;
  struct timespec begin, end;
   clock_gettime(CLOCK_MONOTONIC_RAW, &begin);

        mysort(arr, n); 
     clock_gettime(CLOCK_MONOTONIC_RAW, &end);

    printf ("Total time = %f seconds\n",(end.tv_nsec - begin.tv_nsec)/1000000000.0+(end.tv_sec  - begin.tv_sec));
    return 0; 
}
void mysort(int *arr, int n)
{
  int x=n-1;
  for(int i=0;i<(n/2)+1;i++)
  {
    int start=0;
    int end=n-1-i;
    while(end-start>=1)
    {
      if(arr[start]>arr[start+1])
        swap(&arr[start],&arr[start+1]);
      if(arr[end]>arr[end-1])
        swap(&arr[end],&arr[end-1]);
      end--;
      start++;
    }
        swap(&arr[end],&arr[x]);
        x--;  
  }
}