#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n , p=0 , q=0;
        cin>>n;
        long long int a[n] , b[n]={0};
        for(int i=0 ; i<n; i++){
            cin>>a[i];
        }

        // for(int s=0 ; s<n ; s++){
        if(n%2==0){
            p=n/2;
            q=n/2 - 1;
        }
        else{
            p=n/2 +1;
            q=n/2;
        }
        // cout<<p<<" ";
        
        int s=0;

        for(int i=0 , j=n-1 ; i<p , j>=q ; i++ , j-- ){
            b[s] = a[i];
            b[s+1] = a[j];

            s= s+2;           
        }

        
        for(int i=0 ; i<n ; i++){
            cout<<b[i]<<" ";
        }

        cout<<endl;
        

    }
}