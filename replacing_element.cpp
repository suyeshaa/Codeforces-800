#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count_sum =0 , count=0;
    while(t--){
        count_sum =0 ;
        count =0 ;
        int n,d;
        cin>>n;
        cin>>d;
        int a[n] ;
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }

        for(int i=0 ; i<n ; i++){
            if(a[i] > d){
                count ++ ;
            }
        }

        if(count!= 0){

            for(int i=0 ; i< n ; i++){
                for(int j=i+1 ; j<n ; j++){
                    if(a[i] + a[j] <=d){
                        count_sum++ ; 
                        // cout<<a[i]<<a[j]<<endl;
                    }
                }
            }
            if(count_sum > 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

        else{
            cout<<"YES"<<endl;
        }

        // cout<<count_sum<<endl;

        // cout<<count<<endl;

        

    }
}