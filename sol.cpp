//sort array with inbuild qsort
#include <bits/stdc++.h>
using namespace std;
void print(int* Arr,int n){
    for(int i=0;i<n;i++)
        printf("%d ",Arr[i]);
    printf("\n");
}
using namespace std;
int main(){
   int Arr[]={34,4,3,4,346,23,346364,4673,2,553,7,25,67};  
   int elements = sizeof(Arr)/sizeof(Arr[0]); // the number of elements
   print(Arr,elements);
   
   sort(Arr,Arr+elements); //comp -> func (acc/dec)
   
   print(Arr,elements);
   return 0;
}