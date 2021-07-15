#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , count=1 , d=0;
    cin>>n;
    char a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    for(int i=0 ; i<n-1 ; i++){
        if(a[i]==a[i+1] &&  a[i]=='x'){
            count++ ;
            if(count>2){
                d++ ;
                // cout<<count<<" ";
                // cout<<d<<" ";
            }
        }
        else{
            count =1 ;
        }
    }

    cout<<d<<endl;

    // int i=0 ; 

    // while( i<n-1 ){
    //     if(a[i]==a[i+1] && a[i]==a[i+2] && a[i]=='x'){
    //         count++ ;
    //         i = i+3;
    //     }
    //     else{
    //         i = i+1;
    //     }
    // }
    // cout<<count<<endl;
}