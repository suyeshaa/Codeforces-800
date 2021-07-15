#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<char>vec;
        int n;
        cin>>n;
        char a[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        for(auto x : a){
            vec.push_back(x);
        }
        auto it = unique(vec.begin() , vec.end()) ;
        vec.resize(distance(vec.begin() , it));

        // vec.erase(it , vec.end()) ;
        // for(int i=0 ; i<vec.size() ; i++){
        //     cout<<vec[i] ;
        // }

        set<char>s;
        for(auto x: vec){
            s.insert(x);
        }

        if(vec.size() == s.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        

       




    }
}