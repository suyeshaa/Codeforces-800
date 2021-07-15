#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t, count=0;
    cin>>t;
    int n;
    
    
    while(t--){
        count =0 ;
        cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        sort(a , a+n);
        for(int i=0 ; i<n-1 ; i++){
            if((a[i+1] - a[i])<=1){
                count++;
            }
        }
        if(count==n-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
}