//frequency sort part 1
/*
//negative elements issue

//split the array into / below 0 and above zero / as per quick sort once
//element stored in below zero array should store the neg. numer with +.
//this will result in sorting of negative elements.

//for storage issue

find min and max hence find range 
0->min
1->min+1
2->min+2
..
..
n->min+n
just make an extra array of size n
now work with  0 - n-1 index
now work with same array with
n   -> 0
n+1 -> 1
n+2 -> 2
..
..

basically one by one we are counting the freq of numbers with same array size of n.
and we will be using % operator as such we will not going threw the loop extra 
0 9 6 5 78
we will run normally till 9 then jump to 75 
so the loop will dosn't runs the extra time 
of 10 -75

//float issue 
//making the extra array of long long int 
and we know the float holds max of 6 digit so multipy the number 
with 100000 to make that a (int) then we can use the algo as a int
1.work remaining with this case  
3456.98769*1000000    
2.
*/
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
void my_sort(int a[],int B[],int n,int max)
{
     for(int i=0;i<n;++i)
        B[a[i]]++;
     printf("\n");
      for(int i=0;i<max;++i)
        printf("%d ",B[i]);
}
 
int main()
{
    int n;
    scanf("%d",&n);  
    int a[n];
    for(int i=0;i<n;++i)
     a[i]=(rand()%100);
   //max finding
   int max=a[0];
    for(int i=1;i<n;++i)
    {
     if(a[i]>max)
      max=a[i];
    }

     int *B;
     B = (int *)calloc(max, sizeof(int));
    for(int i=0;i<max;++i)
       B[i]=0;
     
     srand(time(0));
   struct timespec begin, end;
   clock_gettime(CLOCK_MONOTONIC_RAW, &begin);
    my_sort(a,B,n,max);
     clock_gettime(CLOCK_MONOTONIC_RAW, &end);
      printf ("\nTotal time = %f seconds\n",(end.tv_nsec - begin.tv_nsec)/1000000000.0+(end.tv_sec  - begin.tv_sec));
    return 0;
}