//thief with max profit
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, k; cin>>n>>k;
  int* arr = new int[n];
  srand(time(NULL));
  for(int i = 0; i < n; i++){
    arr[i] = rand()%10;
  }
  auto it = {1,2,3,4,5,7,3,53,2,7};
  priority_queue<int> q;
  for(int i = 0; i < n; i++){
    q.push(arr[i]);
  }
  while(k--){
    cout<<q.top()<<" ";
    q.pop();
  }//O(nlog(n)) + O(k)
  return 0;
}
