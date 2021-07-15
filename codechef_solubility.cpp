#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x , a , b , solub=0;
        cin>>x>>a>>b;

        solub = ( a + (100 - x)*b )*10 ;

        cout<<solub<<endl;

    }
}