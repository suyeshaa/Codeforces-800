#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        int count_1=0;
        int count_2=0;
        int b=0;

        for(int i=0 ; i<n-1 ; i++){
            if(a[0]==a[i+1]){
                count_1 ++ ;
            }
            else{
                count_2++ ;
                b = i+1;
            }
            
        }

        if(count_1 == 0){
            cout<<1;
        }
        else{
            cout<<b+1;
        }

        cout<<endl;
    }
}