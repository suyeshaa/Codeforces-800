#include<iostream>
using namespace std;
string a,b,c;
int s[26]={0} , t[26]={0} ;
int count=0 ;
int main(){    
    cin>>a;
    cin>>b;
    cin>>c;
    if(a.length()+b.length() == c.length()){
        for(int i=0 ; i<a.length() ;i++){
            int d= (int)a.at(i);
            s[d-65]++;            
        }
        // for(int i=0 ; i<26 ; i++){
        //     cout<<s[i];
        // }
        for(int i=0 ; i<b.length() ; i++){
            int d= (int)b.at(i);
            s[d-65]++;
        }
        // for(int i=0 ; i<26 ; i++){
        //     cout<<s[i]<<" ";
        
        for(int i=0 ; i<c.length() ; i++){
            int d= (int)c.at(i);
            t[d-65]++;
        }
        // for(int i=0 ; i<26 ; i++){
        //     cout<<t[i]<<" ";
        // }

       
       for(int i=0 ; i<26 ; i++){
           if(s[i]==t[i]){
               count++;
           }
       }

       if(count==26){
           cout<<"YES";
       }
       else{
           cout<<"NO";
       }
    }
    

    else{
        cout<<"NO";
    }

}
