#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , sum=0 , div=0 , count=0 ;
        cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        for(int i=0 ; i<n ; i++){
            sum += a[i] ;
        }

        div = sum/n;

        if(div*n < sum){
            while(sum > div*n){
                div = div+1 ;
            }
            cout<<div<<endl;
        }
        else{
            cout<<div<<endl;
        }
    }
}