//trailing zeros..
#include <bits/stdc++.h>
using namespace std;
int trailingZero(int n){
  int ans = 0;
  while(n >= 5){
    ans+=(n/=5);
  }
  return ans;
}
int main(){
  int n;
  cin>>n;
  cout<<trailingZero(n);
}
