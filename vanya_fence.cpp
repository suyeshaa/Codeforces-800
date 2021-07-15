#include<iostream>
using namespace std;
int main(){
    int n , count=0;
    cin>>n;
    int h;
    cin>>h;
    int a;
    while(n){
        cin>>a;
        if(a<=h){
            count++;
        }
        else{
            count=count+2;
        }
        n--;
    }
    cout<<count;

}