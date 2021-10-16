#include <bits/stdc++.h>
using namespace std;
class MyCmp{
public:
  bool operator()(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
  }
};

int main(int argc, char const *argv[]) {
  int n, item; cin>>n;
  map<int,int> mp;
  while(n--){
    cin>>item;
    mp[item]++;
  }
  priority_queue<pair<int,int>,vector<pair<int,int>>,MyCmp> pq;
  for(auto i=mp.begin(); i != mp.end();i++){
    pq.push({i->first,i->second});
  }
  int k; cin>>k;
  while(--k){
    pq.pop();
  }
  auto it = pq.top();
  cout<<it.first<<" "<<endl;
  return 0;
}
