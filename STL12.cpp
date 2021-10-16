//make a function template..for generlised search and
#include <bits/stdc++.h>
using namespace std;
template<typename T>
bool binary_search(vector<T> v, int val, int start, int end){
  int mid = (start+end)/2;
  while(start <= end){
    if(v[mid] > val)
      return binary_search(v,val,start,mid);
    else if(v[mid] < val)
      return binary_search(v,val,mid,end);
    else
      return true;
  }
  return false;
}

template<typename T>
class Sortt{
public:
  vector<T> sorting(vector<T> v){
    sort(v.begin(),v.end());
    return v;
  }
  void Print(vector<T> v){
    for(auto it : v){
      cout<<it<<" ";
    }
  }
};

int main(int argc, char const *argv[]) {
  vector<int> v = {1,2,3,4,5};
  //cout<<binary_search(v,2,0,v.size());
  Sortt<int> s();
  s.sorting(v);
  s.Print(v);
  return 0;
}
