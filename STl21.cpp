#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string s,t; int moves;
  cin>>s>>t>>moves;
  int same = 0, l1 = 0, l2 = 0;
  while(s[same] && t[same]){
    if(s[same] == t[same])
      same++;
    else
      break;
  }
  l1 = s.length() - same;
  l2 = t.length() - same;
  //aba
  //aba
  if(l1 + l2 == moves) cout<<"Yes";
  else cout<<"No";
  return 0;
}
