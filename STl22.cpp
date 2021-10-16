#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> nums = {2,4,6,6,7,8,9,10,15};
  unordered_map<int,int> mp;
  for(int i = 0; i < nums.size(); i++){
    mp.insert({nums[i],i});
  }
  for(auto it : mp)
    cout<<it.first<<" "<<it.second<<endl;
  return 0;
}
