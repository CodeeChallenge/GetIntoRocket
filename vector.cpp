#include <bits/stdc++.h>
#include <unordered_map> 
using namespace std; 
int main() 
{ 
    int n;
    scanf("%d",&n);
    int arr[n]; 
    srand(time(0));
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        //arr[i]=rand();   
     struct timespec begin, end;
   clock_gettime(CLOCK_MONOTONIC_RAW, &begin);
    unordered_map<int, int> mp; 
for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
   //if(arr[i]!=arr[j])
        mp[arr[i]]++; 
    for (int i = 0; i < n; ++i)  
        arr[i] = mp[arr[i]];  
    for (int i = 0; i < n; ++i)  
         printf("%d ",mp[i]);
    clock_gettime(CLOCK_MONOTONIC_RAW, &end);
    printf ("Total time = %f seconds\n",2*(end.tv_nsec - begin.tv_nsec)/1000000000.0+(end.tv_sec  - begin.tv_sec));
    return 0; 
} 
