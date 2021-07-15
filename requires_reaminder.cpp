#include<iostream>
using namespace std;
int main(){
    long long int t , x ,y ,n ,k;
    cin>>t;
    while(t--){
        cin>>x;
        cin>>y;
        cin>>n;
        if(n-n%x+y <=n){
            cout<< n-n%x+y<<endl;
        }
        else{
            cout<< n-n%x-(x-y)<<endl;
        }
    }





}