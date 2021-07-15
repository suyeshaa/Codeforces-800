#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int even_sum =0 , odd_sum =0;
        int n;
        cin>>n;
        int a[n];
        if(n%4==0){
            cout<<"YES"<<endl;
            for(int i=0 ; i<n/2 ; i++){
                a[i] = 2 * (i+1) ;
                even_sum +=a[i] ;
            }
            int j=0;
            for(int i=n/2 ; i<n-1 ; i++){
                a[i] = 1 + 2*j ;
                odd_sum += a[i];
                j++ ;
                // cout<<j<<" ";
            }
            // cout<<endl;

            a[n-1] = even_sum - odd_sum ;

            for(int i=0 ; i<n ; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
}