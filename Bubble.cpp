#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
    vector<int> nums;
    fstream File;
    File.open("numbers.txt");
    std::vector<int>numbers;
    int number;
    while(File >> number)
      nums.push_back(number);

    for(int i = 0;i < nums.size(); i++){
      for(int j = 0; j < nums.size(); j++){
        if(nums[i] < nums[j]){
          swap(nums[i],nums[j]);
        }
      }
    }

  for(auto it : nums){
    File << it;
    cout << it <<" ";
  }
  File.close();
  return 0;
}
