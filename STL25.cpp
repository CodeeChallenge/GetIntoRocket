#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> nums1 = {1,3,4,5,11};
  vector<int> nums2 = {6,7,8,10};
  make_heap(nums1.begin(),nums1.end(),greater<int>());

  for(int i = 0; i< nums2.size(); i++){
    if(nums1.front() < nums2[i]){
      swap(nums1.front(),nums2[i]);
      make_heap(nums1.begin(),nums1.end(),greater<int>());
    }
  }
  sort_heap(nums1.begin(),nums1.end());

  for(auto it : nums1){
    cout<<it<<" ";
  }
  cout<<endl;
  for(auto it : nums2){
    cout<<it<<" ";
  }
  return 0;
}
