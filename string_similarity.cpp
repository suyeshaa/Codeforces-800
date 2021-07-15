#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str , s;
        cin>>str;
        int j=0 ;
        for(int i=0 ; i< str.length() ; i=i+2){
            s += str.at(i);
            j++;                       
        }

        cout<<s<<endl;
    }
}