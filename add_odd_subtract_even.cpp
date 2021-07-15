#include<iostream>
using namespace std;
int main(){
    int t , a, b, c=0;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        if(a>b){
            c= a-b;
            if(c%2==0){
                cout<<1<<endl;
            }
            else{
                cout<<2 <<endl;
            }

        }
        else if(b>a){
            c= b-a;
            if(c%2==0){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }

        }
        else{
            cout<<0<<endl;
        }

    }
}