#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a , b, n , maxim=0 , minim=0 , count=0;
        cin>>a>>b>>n;

        while(a<=n && b<=n){
            if(a>=b){
                b+=a;
                count++ ;
            }
            else{
                a+=b;
                count++ ;
            } 
        }

        cout<<count<<endl;



    }
}

