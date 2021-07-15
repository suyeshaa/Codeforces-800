#include<iostream>
using namespace std;
int main(){
    int k,r,count=0 , a=0 , b=0;
    cin>>k;
    cin>>r;
    for(int i=1 ; i<1000; i++){
        count++;
        a= k*i;
        if(a%10==0){
            break;
        }
        b=a-r;
        // cout<<b<<" ";
        if(b%10==0){
            break;
        }
    }

    cout<<count;
}