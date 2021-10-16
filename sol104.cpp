//count hoe many elements are greater in right.. (see reverse order in answer)
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> nums = {2,3,1,5,6,4};
  set<int> s;
  for(auto it = nums.rbegin(); it != nums.rend(); it++){
    s.insert(*it);
    cout<<distance(s.begin(),s.lower_bound(*it))<<" ";
  }
  return 0;
}
