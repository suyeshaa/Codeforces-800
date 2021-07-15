#include<iostream>
using namespace std;
int main(){
    int a, b , k;
    int count=0 ;
    cin>>a;
    cin>>b;
    while(a<=b){
        a=a*3;
        b=b*2;
        count++;
    }
    cout<<count;
    return 0;
    
}