#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        for(int i=1 ; i<s.length()-1 ; i++){
            if(s.at(i)==s.at(i+1)){
                s.erase(s.begin()+(i+1));
            }
        } 

        cout<<s<<endl;       
    }
}