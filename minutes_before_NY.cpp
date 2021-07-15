#include<bits/stdc++.h>
using namespace std;
int main(){
    int t , a ,b , mins=0 , total_mins=0;
    cin>>t;
    while(t--){
        mins=0;
        total_mins=0;
        cin>>a;
        cin>>b;
        mins = (a*60) + b;
        total_mins = 1440 - mins;
        cout<<total_mins<<endl;

    }
}