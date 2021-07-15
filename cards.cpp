#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,s=0 ,q=0 ;
    cin>>n;
    char a[n] , hash[n] ={0};
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    for(int i=0 ; i<n ; i++){
        if(a[i]=='z'){
            s++ ;
        }
        else if(a[i] == 'n'){
            q++ ;
        }
    }

    for(int i= 0 ; i<q ; i++){
        cout<<1<<" ";
    }
    for(int i= 0 ; i<s ; i++){
        cout<<0<<" ";
    }

}