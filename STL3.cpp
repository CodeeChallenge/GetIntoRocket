//How many elements are greater than ..
#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[] = {1,5,1,3,4,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  multiset<int> S;
  for(int i = 0;i < n; i++){
    S.insert(arr[i]);
  } // n*log(n)
  for(int i = 0; i < n ; i++){
    cout<<distance(S.upper_bound(arr[i]),S.end())<<" ";
  } //n*log(n)
  return 0;
}
