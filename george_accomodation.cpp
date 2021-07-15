#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cin>>n;
    int p,q;
    while(n){
        cin>>p;
        cin>>q;    
        if(q-p >=2){
            count++;
        }
        
        n--;            
    }
    cout<<count;

}