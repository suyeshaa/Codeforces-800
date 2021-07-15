#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x , floor =0 , t=0 , count=0;
        cin>>n>>x;
        if(n==1 || n==2){
            cout<<1<<endl;
        }

        else{
            floor = n-2;
            
            if(floor>=x){
                while(floor>x){
                    floor = floor - x;
                    count++ ;
                }
            }
            else{
                count=0;
            }

            cout<<count+2<<endl;

        }       
        
        
    }
}