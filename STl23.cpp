//move zeros..
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> v1 = {0,1,1,1,1,1,1,1,0};
  int s = 0, e = v1.size() -1;
  while(s <= e){
    if(v1[e] == 1) e--;
    else if((v1[e] == 0) && (v1[s] == 1)){
      swap(v1[e],v1[s]);
      e--;
      s++;
    }
    else{
      s++;
    }
  }
  for(auto it : v1){
    cout<<it<<" ";
  }
  return 0;
}
