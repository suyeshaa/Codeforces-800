#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int i=0;
    while(i<str.length()){
        if(str.at(i)=='-' && str.at(i+1)=='.'){
            cout<<1;
            i = i+2 ;
        }
        else if(str.at(i)=='-' && str.at(i+1)=='-'){
            cout<<2;
            i=i+2;
        }
        else if(str.at(i)=='.'){
            cout<<0;
            i++;
        }
    }
}