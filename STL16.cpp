#include <bits/stdc++.h>
using namespace std;
//Sort by frequency decreasing order..
class DS{
public:
  template<typename T>
  vector<T> sort_freq(vector<T> v1){
    map<int,int> m;
    for(auto i : v1)  m[i]++;
    sort(m.begin(),m.end());
    for(auto i : m){
      cout<<i.first<<" "<<i.second<<endl;
    }
  }
};
int main(int argc, char const *argv[]) {
  vector<int> v1{1,1,1,1,6,3,3,7,8,9,0,0,3,2,5,6};
  DS s;
  v1 = s.sort_freq(v1);
  return 0;
}
