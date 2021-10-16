#include <stdio.h>
#include <time.h>
#include <unistd.h> 
void mysort(int A[],int l);
void swap(int* ,int* );
int main() {
long long int m;
    scanf("%lld",&m);
    int A[m];
     for(int i=0;i<m;i++)
        scanf("%d",&A[i]);
    /*for(int i=0;i<m;i++)
        A[i]=rand()%1000;
    */
    struct timespec begin, end;
   clock_gettime(CLOCK_MONOTONIC_RAW, &begin);
    printf("\n");
     mysort(A,m-1);
    clock_gettime(CLOCK_MONOTONIC_RAW, &end);
   /* printf ("Total time = %f seconds\n",
            (end.tv_nsec - begin.tv_nsec)/1000000000.0+(end.tv_sec  - begin.tv_sec));
    */
   for(int i=0;i<m;i++)
        printf("%d ",A[i]);
    return 0;
}

void mysort(int *A, int l) 
{
    int j;
    for(int i=0;i<l;i++)
    {
        j=l-i-1;
        while(j-i!=1)
        {
            if(A[i]>A[i+1])
                swap(A[i],A[i+1]);
            if(A[l]>A[l-1])
                swap(A[l],A[l-1]);
               j--;
        }
        int t=A[(l/2)-i];
        A[(l/2)-i]=A[l-i];
        A[l-i]=t;
    }
}
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
