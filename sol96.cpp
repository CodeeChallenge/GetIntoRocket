#include <bits/stdc++.h>
using namespace std;
class length{
    private:
        float feet;
        float inch;
    public:
        void get_data(){
            int temp1,temp2;
            cout<<"Enter feet and inch\n";
            cin>>temp1>>temp2;
            feet = temp1;
            inch = temp2;
            calc_data();
        }
        void calc_data(){
            if(inch>12){
                feet = feet + (inch/12);
                inch /= 12;
            }
        }
        void put_data(){
            cout<<feet<<"ft "<<inch<<"inch";
        }
        void add(length ob1,length ob2){
            feet = ob1.feet + ob2.feet;
            inch = ob1.inch + ob2.inch;
            calc_data();
        }
};
int main(){
    length ob1,ob2,ob3;
    ob1.get_data();
    ob2.get_data();
    ob3.add(ob1,ob2);
    ob3.put_data();
    return 0;
}