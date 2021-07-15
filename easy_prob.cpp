#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int a;
    while(n){
        cin>>a;
        if(a==1){
            count++;
            
        }
        n--;
    }
    if(count!=0){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;

}