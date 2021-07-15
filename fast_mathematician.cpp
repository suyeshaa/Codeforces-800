#include<iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    for(int i=0 ; i<s.length() ; i++){
        if(s.at(i)==t.at(i)){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
    }
}