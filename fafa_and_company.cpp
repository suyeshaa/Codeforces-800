#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , b=0 , count=0; 
    cin>>n;
    for(int i=1 ; i<n ; i++){
        b = n-i;
        if(b%i==0){
            count++ ; 
        }        
    }

    cout<<count;
}