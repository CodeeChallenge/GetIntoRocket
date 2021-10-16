#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> a{1,2,3,4,5}, b{5,2,0,3,7,8};
  auto it = lower_bound(a.begin(),a.end(),9);
  if(it != end())
  cout<<"found";
  return 0;
}
