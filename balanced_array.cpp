#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    
    while(t--){
        cin>>a;
        int s[n];
        if(a%4==0){
            cout<<"yes"<<endl;
            for(int i=1 ; i<a ; i++){
                if(a%2==0){
                    s[(a/2)+i-1]=i;
                }
                else{
                    s[t-i-1]=i;                    
                }
            }

        }
        else{
            cout<<"no";
        }
    }
}