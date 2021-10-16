/*
  Purchase Maximum elements..
*/
/*
  Find k most frequent numbers.
  if 2 with same priority then pick the smaller number.
*/
/*
  add({item,price});
  find(price);
  printSorted();
  printGreaterSorted();
  printSmallerSorted();
*/
#include <bits/stdc++.h>
using namespace std;
int n,operation,item,price;
map<int,int,greater<int>> add(map<int,int,greater<int>> M){
  cout<<"Item / Price\n";
  cin>>item>>price;
  M[item] = price;
  return M;
}
void it_find(map<int,int,greater<int>> M){
    cout<<"Enter item\n";
    cin>>item;
    map<int,int,greater<int>> :: iterator  it = M.find(item);
    if(it == M.end())
      cout<<"Not Found\n";
    else
      cout<<"Found\n";
}
void printSorted(map<int,int,greater<int>> M){
  for(auto it = M.begin(); it != M.end(); it++){
    cout<<"item: "<<it->first;
    cout<<"price: "<<it->second<<endl;
  }
}

void printSmallerSorted(map<int,int,greater<int>> M,int price){
  for(auto it = M.lower_bound(price); it != M.end(); it++){
    cout<<"item: "<<it->first;
    cout<<"price: "<<it->second<<endl;
  }
}

void printGreaterSorted(map<int,int,greater<int>> M,int price){
  for(auto it = M.begin(); it != M.upper_bound(price); it++){
    cout<<"item: "<<it->first;
    cout<<"price: "<<it->second<<endl;
  }
}
int main(){
  map<int,int,greater<int>> M;
  cin>>n;
  while(n--){
    cout<<"1.add\n2.find\n3.printSorted\n4.printGreater\n5.printSmaller\n";
    cin>>operation;
    switch (operation) {
      case 1:
        M = add(M);
        break;
      case 2:
        it_find(M);
        break;
      case 3:
        printSorted(M);
        break;
      case 4:
        cout<<"enter price";
        cin>>price;
        printGreaterSorted(M,price);
        break;
      case 5:
        cout<<"enter price";
        cin>>price;
        printGreaterSorted(M,price);
        break;
    }
  }
  return 0;
}
