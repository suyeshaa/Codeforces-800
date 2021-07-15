#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float m , sum=0 ;
    float t =0;
    for(int i=0 ; i<n ; i++){
        cin>>m;
        sum=sum+m;
       
       
    }
    
    t= sum/n;
    
    cout<<t;
    return 0;
}