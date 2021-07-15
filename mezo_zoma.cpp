#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n , left=0 , right=0;
    cin>>n;
    char a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    for(int i=0 ; i<n ; i++){
        if(a[i]= 'L'){
            left++ ;
        }
        else if(a[i] = 'R'){
            right++;
        }
    }
    cout<<left+right+1<<endl;

}