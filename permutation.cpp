#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n] = {0};
    if(n%2==0){
        for(int i=0 ; i<n-1 ; i=i+2){
            a[i] = i+2 ;
            // cout<<i+2<<endl;
            // cout<<a[i]<<endl;

            a[i+1] = i+1;
            // cout<<i+1<<endl;
            // cout<<a[i+1]<<endl;
            
        }
        for(int i=0 ; i<n ; i++){
            cout<<a[i]<<" ";
        }
    }
    else{
        cout<<-1<<endl;
    }
}