#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v = {1,2,3,4,5};
  auto it = next(v.begin(),2);
  advance(it,-2);
  cout<<(*it);
}
