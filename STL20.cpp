//try accessing address by for_each loop
//use find function with this..
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> v = {1,2,4,5,7,9,12,5,3,3,3};
  auto i1 = v.begin();
  for(auto &it : v){
    auto i = find(i1,v.end(),5);
    if(i != v.end()) cout<<" Found |";
    else cout<<" Not Found |";
    i1++;
  }
  return 0;
}
