//next lexigraphical order..
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> nums = {1,2,3,4,5};
  prev_permutation(nums.begin(),nums.end()); //next_permutation()
  for(auto it : nums){
    cout<<it;
  }
  return 0;
}
