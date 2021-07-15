#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int c[1000]={0} , count=0 ;
        int n , m;
        cin>>n>>m;
        int a[n] , b[m];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        int* p = &a[0] ;
        for(int i=0 ; i<m ; i++){
            cin>>b[i];
        }

        for(int i=0 ; i<m ; i++){
            int j=0;
            auto s = find(a , a+n , b[i]);  
            int idx = s - p ;
            if(idx!=n){
                count ++ ;
                c[j] = b[i] ; 
                break;
                j++ ;
            }     
        }




        if(count>0){

            cout<<"YES"<<endl;
            cout<<count<<" ";
            for(int i=0 ; i<count ; i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }
}