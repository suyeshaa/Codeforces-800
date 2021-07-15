#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ,a =0 , count=0;
        string str;
        int hash[26] = {0};
        cin>>n;
        int x = n;
        // cout<<x;
        while(n--){
            cin>>str;
            for(int i=0 ; i<str.length() ; i++){
                a = int( str.at(i) ) - 97 ;
                // cout<<a<<endl;
                hash[a]++ ; 
                // cout<<hash[a]<<endl;                               
            }
        }

        //  for(int i =0 ; i<26 ; i++){
        //     cout<<hash[i]<<" "<<endl;
        // }


        for(int i =0 ; i<26 ; i++){
            if(hash[i] % x !=0){
                // cout<<hash[i]<<endl;
                // cout<<x<<endl;
                // cout<<( hash[i] / x )<<endl;
                count++ ;                                           
            }
        }

        if(count>0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        // if(count%n ==0){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }

    }
}