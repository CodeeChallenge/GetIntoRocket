#include<bits/stdc++.h>
void cnvt(String str){
    int i = 0;
    for(auto &i : str){
         i = atoi(i);
    }
}
int main(){
    string str,cpy;
    cin>>str;
    strcpy(str,cpy,4);
    int t = 4,p = 0,Sourceport = 0;
    int Sourceport = 0;
    while(t--)
        Sourceport += pow(int(cpy[t-1]),p++);
    cout<<Sourceport<<endl;
    int len = 8; //length of data header
    memcpy(str,cpy,4,8);
    int t = 4;
    while(t--){
        cnvt(cpy);
        int Dport += pow(int(cpy[t-1]),p++);
    }
    //Destination port
    cout<<Dport;
    int total = strlen(str) - len;
    cout<<"Total bits = "<<total;
    return 0;
}
