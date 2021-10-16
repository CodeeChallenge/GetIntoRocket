//dance algo
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