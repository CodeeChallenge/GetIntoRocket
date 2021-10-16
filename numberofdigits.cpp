//find the number of digits in a number..
#include <bits/stdc++.h>
using namespace std;
int noOfDigits(int n){
  if(n <= 0) return 0;
  return 1 + noOfDigits(n/10);
}
int main(){
  int n, m = 0;
  cin>>n;
  //methord_1
  cout<<noOfDigits(n);

  //methord_2
  cout<<(int)log10(n)+1;
  return 0;
}
