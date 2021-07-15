#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int t,b;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int a[2*n] , hash[n] ={0};
        for(int i=0 ;i<2*n ; i++){
            cin>>a[i];
        }
        for(int i=0 ; i<2*n ; i++){
            if(hash[a[i]-1]==0){
                cout<<a[i]<<" ";
                hash[a[i]-1]=1;
            }
        }
        cout<<endl;

    }
}