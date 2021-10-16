#include <bits/stdc++.h>
using namespace std;
class Fried{
  public:
    unordered_map<int,int> s;
    Fried(){
      
    }
    unordered_map<int,int> sett(int item, int val){
      s[item] = val;
      return s;
    }

    void gett(int item){
      cout<<s[item];
    }
};

int main(int argc, char const *argv[]){
  int m, item, val, op;
  cin>>m;
  Fried s = new Fried();
  while(m--){
    cout<<"1. set\n 2. get\n";
    cin>>op;
    switch (op) {
      case 1:
        s = s.sett(item,val);
        break;
      case 2:
        s.gett(item);
        break;
    }
  }
  return 0;
}
