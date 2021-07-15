#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , count=0 , d=0 , c=0;
        cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }

       for(int i=0 ; i<n ; i++){
           if(a[i]==1){
                d++ ;
               for(int j=i+1 ; j<n ; j++){
                   if(a[j]==1){
                    //    cout<<j<<endl;
                    //    cout<<i<<endl;
                       count += j-i-1 ;
                       break;
                   }
               }
           }
            
        }

        if(d==0 || d==1){
            cout<<0<<endl;
        }
        else if(d>=2){
            cout<<count<<endl;
        }
        
    }
}