#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    long long int a , b, c,d , x, y, z;
    while(t--){
        cin>>a>>b>>c>>d;

        // if(a==b){
        //    x=a;
        // }
        // else{
        //     x= b-a;
        // }
        // if(c==b){
        //     y=c;
        // }
        // else{
        //     y= c-b +x;
        // }
        // if(d==c){
        //     z=d;
        // }
        // else{
        //     z = d-c +y;
        // }
        // cout<<x<<" "<<y<<" "<<z<<endl;

        x= b;
        y=c;
        z=c;
        cout<<x<<" "<<y<<" "<<z<<endl;

    }
}