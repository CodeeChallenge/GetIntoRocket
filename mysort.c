//dance algo
//split the array into / below 0 and above zero / as per quick sort once
//element stored in below zero array should store the neg. numer with +.
//this will result in sorting of negative elements.

//for storage issue
/*
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
*/
#include <time.h>

#include <iostream>
using namespace std;

int mid(int a, int b, int c) 

{ 
    
	if ((a < b && b < c) || (c < b && b < a)) 
       
		return b; 
    
	else if ((b < a && a < c) || (c < a && a < b)) 
       
		return a; 
    
		else
       return c; 

}	


void halfaside (int arr[],int B[], int middle , int n) 

{ 
    
	int x=0,y=n-1;
    for(int i=0;i<n;i++)
    
	{
        
		if(arr[i]<middle)
            
		{
                
			B[x]=arr[i];
                
			x++;
            
		}
        
		else if(arr[i]>middle)
            
		{
	
                B[y]=arr[i];
                
			y--;
            
			} 
    
		}  
    
		for(int i=x;i<=y;i++)
         
			B[i]=middle;      

} 

void swap(int* a, int* b) 

{ 
    
	int t = *a; 
    *a = *b; 
    *b = t; 

}

void mySort(int arr[], int n) 

{ 

    
	int index = 0; 
    
	while (index < n) 
    
	{ 
        
		if (index == 0) 
            
			index++; 
        
		if (arr[index] >= arr[index - 1]) 
            
			index++; 
        
		else 	
		{
	 
            swap(arr[index], arr[index - 1]); 
            
			index--; 
             
		} 
    
	} 
    
	return; 

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
    
int middle=mid(arr[0],arr[n/2],arr[n-1]);
     
int B[n];
     
for(int i=0;i<n;i++) 
         
B[i]=0;
     
halfaside(arr,B,middle,n);
        
mySort(B, n); 
     
clock_gettime(CLOCK_MONOTONIC_RAW, &end);
    
printf ("Total time = %f seconds\n",(end.tv_nsec - begin.tv_nsec)/1000000000.0+(end.tv_sec  - begin.tv_sec));
  
printf("\n");
     //  for(int i=0;i<n;i++) 
    //    printf("%d ",B[i]);
    
return 0; 

}