#include <stdio.h>
#include <time.h>
#include <unistd.h> 
void mysort(int A[],int l, int h);
void swap(int ,int );
int main() {
int m;
    scanf("%d",&m);
    int A[m]; 
    for(int i=0;i<m;i++)
        scanf("%d",&A[i]);
    int n = sizeof(A) / sizeof(A[0]); 
    struct timespec begin, end;
   clock_gettime(CLOCK_MONOTONIC_RAW, &begin);
  //algo...
   mysort(A,0,n-1);
    clock_gettime(CLOCK_MONOTONIC_RAW, &end);
    printf ("Total time = %f seconds\n",
            (end.tv_nsec - begin.tv_nsec)/1000000000.0+(end.tv_sec  - begin.tv_sec));

    return 0;
}

void mysort(int A[], int l, int h) 
{ 
    if (A[l] > A[h]) 
        swap(A[l], A[h]); 
    if (h - l + 1 > 2) { 
        int t = (h - l + 1) / 3; 
        mysort(A, l, h - t); 
        mysort(A, l + t, h); 
    } 
}

void swap(int i,int j)
{
    int t;
    t=i;
    i=j;
    j=t;
}