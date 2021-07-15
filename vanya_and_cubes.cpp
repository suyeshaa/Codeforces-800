#include<bits/stdc++.h>
using namespace std;

int count(long long int y){
    long long int count =0;
    for(long long int i=1 ; i<=y ; i++){        
        count= count+i;
    }
    return count;
}
int main(){
    long long int n , sum=0 , set=0;
    cin>>n;

    for(long long int i=1 ; i<=n ; i++){
        n = n - count(i);
        if(n>=0){
           set++;
        }
    }
    cout<<set;
    
    
}