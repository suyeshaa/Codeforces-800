#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t , a, b ,w=0;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        if(a>b){
            w=2*b;
            if(w>a){
                cout<<pow(w,2)<<endl;
            }
            else{
                cout<<pow(a,2)<<endl;
            }                        
        }  
        else if(b>a){
            w=2*a;
            if(w>b){
                cout<<pow(w,2)<<endl;
            }
            else{
                cout<<pow(b,2)<<endl;
            }
        }      
        else{
            w=2*a;
            cout<<pow(w,2)<<endl;
        }
    }
}