#include <bits/stdc++.h>
using namespace std;
//g++ -std=c++11 learnstl.cpp -o a
bool comparator(int x,int y){
    return x>y;
}
void WorkingWithSets(void){
    //working on set        
    //insert elements in set
    set <int> a {1,2,3,4};
    a.insert(5);
    for(int x: a)
    cout<< x<<" ";
    
    //find a particular element
    auto iter = a.find(0); 
    cout<<"start\n"<<endl;
    for(;iter!=a.end();iter++)
        cout<<*iter<<endl;
    
    //use upper_bound and lower_bound   
    auto ie=a.lower_bound(2);
    auto w=a.upper_bound(7);
    if(w == a.end())
        cout<<"nope!!";
    else
        cout<<"yep!!";
    
    //remove an element 
    a.erase(1);
    
    //change values in set ,and it don't need call by refreence
    for(int i: a)
        ++i;
    
    for(int i: a)
        cout<<++i<<" ";
        
}
void WorkingWithVectors(void){ 
    //make a vector by some elements
    vector<int> A {5,4,3,2,1,1};
    
    //sort in accending and print 
    sort(A.begin(),A.end());
    vector <int> ::iterator i1= A.begin();
    for(;i1!=A.end();i1++)
        cout<<*i1<<" ";
 
    //find how many times 'n' occured
    vector <int> ::iterator i = upper_bound(A.begin(),A.end(),2);
    vector <int> ::iterator j = lower_bound(A.begin(),A.end(),2);
    cout<<"\n2 is "<<i-j<<" times\n";
    //sort in decending and print 
    sort(A.begin(),A.end(),comparator);
    vector <int> ::iterator g=A.begin();
    for(;g!=A.end();g++){
        cout<<*g<<" ";
    }
    cout<<endl;
    
    //use of auto to print even elements
    auto r = A.begin();
    for(;r!=A.end();r++)
        if (*r%2==0)
            cout<<*r<<" "; 
    cout<<endl;    
    //use of auto to print odd and change their value by 1 to make them even and again print
    cout<<endl;
    for(int &x: A)
        if(x%2!=0)
            cout<<++x<<" ";
    cout<<endl;
}
int finditerator2(set <int>b,int item){
    //find how many element 'n' are present without disturbing the order.
    return (*b.upper_bound(item) - *b.lower_bound(item));
}
int finditerator1(const vector <int>a,int item){
	//find how many element 'n' are present without disturbing the order.
	//find this with upper_bound and lower_bound
	vector <int>copy1;
	for(int x: a){
	    copy1.push_back(x);
	}
	sort(copy1.begin(),copy1.end());
	return  (upper_bound(copy1.begin(),copy1.end(),item) - lower_bound(copy1.begin(),copy1.end(),item));
}
void WorkingWithMap(){
	map<int,int> a;
	a[0]=1;
	a[1]=2;
	a[2]=3;
	a[3]=4;
	a[4]=5;
	a[6]=7;
	a[7]=8;
	a[8]=9;
	//find how many times 3 is mapped.
	map<int,int>r;
	for(int p=0;p<a.size();p++){
			r[a[p]]++;
 		}
	cout<<r[0]<<" "<<r[8]<<" "<<r[10]<<endl;
	//find and erase
	const auto x=a.find(0);
	a.erase(4);
	//cout<<x->first;       //shows domain
	//cout<<x->second;      //shows range
	
	//iterator based loop
	for (auto itr = a.begin(); itr != a.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    //index based loop
    for(auto it: a){
    	cout<<it.first;
    	cout<<"     "<<it.second<<endl;
    }

}
int main(){
    //give the range number 
    //[1,6]
    //[7,17]
    //[20,300]
    //you will be given 'n' you have to answer in which range 'n' lies,
    //if it dos'nt print -1 otherwise print number of that range 
    //ex. 5 --> 1     
    return 0;
}