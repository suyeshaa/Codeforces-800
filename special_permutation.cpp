#include<bits/stdc++.h>
using namespace std;
int main(){
    int t , s;
    cin>>t;
    while(t--){
        cin>>s;
        int a[s];
        for(int i=0 ; i<s ; i++){
            a[i] = i+1;            
        }
        
        reverse(a , a+s);
        
        for(int i=0 ; i<s ; i++){
            if( a[i]==i+1 ){
                swap(a[i] , a[i+1]);
            }
        }


        for(int i=0 ; i<s ; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
       

    }
}