/*
  insert(val)
  replace(val,{seq})
  print()
*/

/*
  insertMin(val)
  insertMax(val)
  getMax(val)
  getMin(val)
  extractMin(val)
  extractMax(val)
*/

/*
  Max element of k size subarray
*/
/*
  find the stock span..
  print the number of days the current stock is more or equal.
  1 4 2 5 6
  1 2 1 3 4
*/
/*
  nearest next greatest element.
  3  5 2  6 4  8 5
 -1 -1 5 -1 6 -1 8
*/
/*
  getMin()  -> Support in O(1).
*/
/*
  Given n, generate n numbers only containing 5,6 as digits(also in inc order)
*/


#include <bits/stdc++.h>
using namespace std;
class Student{
  public:
    int rollNo;
    string name;

    Student(int r,string n){
      rollNo = r;
      name = n;
    }
};
class Cmp {
    public:
      bool operator()(Student const& p1, Student const& p2)
    {
        return p1.rollNo < p2.rollNo;
    }
};
int main(){
  priority_queue<Student,vector<Student>,Cmp> pq;
  int n,roll;
  string name;
  cin>>n;
  while(n--){
    cin>>roll;
    cin>>name;
    pq.push(Student(roll,name));
  }
  cout<<"\n";
  while(pq.empty() == false){
    Student p = pq.top();
    cout<<p.rollNo<<" "<<p.name<<endl;
    pq.pop();
  }
  return 0;
}
/*
tutorial republic
-> Diff HTML5/4
-> Diff css2/css3 (menus)
-> Diff JS/JQuery
-> what is responsive webdesign(BootStrap)
-> What are server site lang(PHP)
-> Why we use server site lang
-> what are css media queries(device specific)
->
*/
