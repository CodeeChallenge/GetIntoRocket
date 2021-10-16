//print k-most occuring element
#include <bits/stdc++.h>
using namespace std;
class MyCmp{
public:
    bool operator()(const pair<int,int>& a, const pair<int,int>& b){
    return a.second > b.second;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> v1 = {1,2,3,3,2,1,1,1,3,3};
  unordered_map<int,int> mp;
  for(auto it : v1){
    mp[it]++;
  }
  priority_queue<pair<int,int>,vector<pair<int,int>>,MyCmp> pq;
  for(auto it: mp){
    cout<<it.first<<" "<<it.second<<endl;
  }
  return 0;
}
