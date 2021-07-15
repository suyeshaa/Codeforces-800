#include<iostream>
using namespace std;
int main(){
    int n;
    int s;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int b[n];
    for(int i=0 ; i<n ; i++){
        s=a[i];
        b[s-1]=i+1;
        
    }    

    for(int t=0 ; t<n ; t++){
        cout<<b[t]<<" ";
    }

    return 0;

    
}