//use upper_bound,lower_bound, next, prev, advance..
//solve 2_sum-II problem

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> nums = {1,1,1,1,1,2,2,2,2,3,3,3,3,4,5,6,7,7};
  int sum = 3;
  for(auto it = nums.begin(); it <= nums.end(); it++){
    vector<int> ::iterator i = find(it,nums.end(),sum - (*it));
    if(i != nums.end()){
      cout<<"Found";
      break;
    }
    else{
      int move = upper_bound(it,nums.end(),*it) - it;
      advance(it,move);
    }
  }
  return 0;
}
