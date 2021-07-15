#include<iostream>
using namespace std;
int main(){
    int t , m , n;
    cin>>t;
    while(t--){
        cin>>m;
        cin>>n;
        if((m*n)%2==0){
            cout<< (m*n)/2<<endl;
        }
        else{
            cout<< (m*n +1) / 2 <<endl;
        }


    }
}
