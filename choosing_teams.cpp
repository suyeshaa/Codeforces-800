#include<iostream>
using namespace std;
int main(){
    int n, k,count=0 ;  
    cin>>n;
    cin>>k;  
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    for(int i= 0 ; i<n ; i++){
        if(5-k>= a[i]){
            count++;
        }
    }

    cout<<count/3;

    
}
