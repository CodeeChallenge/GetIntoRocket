#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> v{3,4,1,9,56,7,9,12};
  int k = 5;
  int n = v.size();
  sort(v.begin(),v.end());
  int diff = v[k-1] - v[0], ans = v[k-1] - v[0];
  for(int i = 0 ;i < (n-k+1); i++){
    ans = min(v[i+(k-1)] - v[i],ans);
  }
  cout<<ans;
  return 0;
}
