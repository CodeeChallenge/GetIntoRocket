#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
  int n;
  cin>>n;
  queue<string> q;
  q.push("");
  while(n--){
    string tmp = q.front();
    q.pop();
    q.push(tmp+"5");
    q.push(tmp+"6");
    cout<<q.front()<<" ";
  }
  return 0;
}
