//2_sum ...
#include <bits/stdc++.h>
using namespace std;
vector<int> two_sum(vector<int>& nums,int target){
  vector<int> sums;
        auto it = nums.begin(); int i;
        for(i = 0 ; i < nums.size() ; i++){
            it = find(sums.begin(),sums.end(),target - nums[i]);
            if(it != sums.end()){
                break;
            }
            sums.push_back(nums[i]);
        }
        cout<<distance(sums.begin(),sums.end());
        return {i,0};
}
int main(int argc, char const *argv[]) {
  int n; cin>>n; vector<int> v(0,n);
  for(int i = 0 ; i < n ;i++)
     cin>>v[i];
  int target; cin>>target;
  vector<int> ans = two_sum(v,target);
  for(auto it : ans){
    cout<<it<<" ";
  }
  return 0;
}
