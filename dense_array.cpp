#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , count=0 , t=0 , s=0;
        cin>>n;
        int a[n];
        for(int i=0 ; i<n ;i++){
            cin>>a[i];
        }

        for(int i=0 ; i<n-1 ; i++){
            s = max(a[i] , a[i+1]);
            t = min(a[i], a[i+1]);

            while(t*2 < s){
                t = t*2 ;                                
                count++ ;
                
            }
        }

        cout<<count<<endl;
    }
}