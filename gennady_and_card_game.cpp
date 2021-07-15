#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string s;
    cin>>s;
    string a;

    for(int i=0 ; i<5 ; i++){
        cin>>a;
        if(s.at(0)== a.at(0) || s.at(1)==a.at(1)){
            count++;
        }
    }
    if(count==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

    // string a, b, c, d, e;
    // cin>>a>>b>>c>>d>>e;

    //     if(s.at(0)==a.at(0) || s.at(0) == a.at(1) || s.at(1)==a.at(0) || s.at(1) == a.at(1) ){
    //         cout<<"YES"<<endl;
        
    //     }
        
    //     else if(s.at(0)==b.at(0) || s.at(0) == b.at(1) || s.at(1)==b.at(0) || s.at(1) == b.at(1)){
    //         cout<<"YES"<<endl;
            
    //     }
    //     else if(s.at(0)==c.at(0) || s.at(0) == c.at(1) || s.at(1)==c.at(0) || s.at(1) == c.at(1)){
    //         cout<<"YES"<<endl;
           
    //     }
    //     else if(s.at(0)==d.at(0) || s.at(0) == d.at(1) || s.at(1)==d.at(0) || s.at(1) == d.at(1)){
    //         cout<<"YES"<<endl;
           
    //     }
    //     else if(s.at(0)==e.at(0) || s.at(0) == e.at(1) || s.at(1)==e.at(0) || s.at(1) == e.at(1)){
    //         cout<<"YES"<<endl;
            
    //     }
    //     else{
    //         cout<<"NO"<<endl;
           
    //     }

    





}