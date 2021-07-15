#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s , p;
    cin>>s>>p;

    // for(int i=0 ; i<n ; i++){
    //     cin>>s[i];
    // }
    // for(int i=0 ; i<n ; i++){
    //     cin>>p[i];
    // }


    int count=0 , z=0 , x=0 , g=0 ;

    for(int i=0 ; i<n ; i++){
        z = s.at(i) - '0' ;
        x = p.at(i) - '0' ;
        g = abs(z-x);

        // cout<<z<<" "<<x<<" ";
        if(g > abs(9- g)) {
            count += abs(9-g) + 1 ;
            // cout<<count<<" ";
        }
        else{
            count += g ;
            // cout<<count<<" ";
        }
    }

    cout<<count;
}