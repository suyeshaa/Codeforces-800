#include<iostream>
using namespace std;
int main(){
    int a,b ,c;
    cin>>a; 
    cin>>b;
    if(a>b){
        cout<<b<<" ";
    }
    else{
        cout<<a<<" ";
    }

    if(a>b){
        c=(a-b)/2;
    }
    else{
        c=(b-a)/2;
    }

    cout<<c<<" ";

}