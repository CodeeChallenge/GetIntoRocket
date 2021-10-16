#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int start[] = {900,940};
  int end[] = {1000,1030};
  int maxx = 0, n = sizeof(start)/sizeof(start[0]);
  for(int i = 0; i < n ;i ++){
    for(int j = start[i]; j < end[i]; j++){
      if(++m[j] > maxx)
        maxx = m[j];
    }
  }
  cout<<maxx;
  return 0;
}
