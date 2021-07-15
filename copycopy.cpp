#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t , n;
    cin>>t;
    set<int>s;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }

        for(auto x : a){
            s.insert(x);
        }

        cout<<s.size()<<endl;


    }
}