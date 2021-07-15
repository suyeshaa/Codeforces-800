#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=1 ; i<=n ; i++){
        if(i%2!=0){
        for(int j=1 ; j<=m ; j++){
            cout<<"#";
        }
        // cout<<endl;
        }
        else{
            for(int j=1 ; j<=m ; j++){
                if(i%4==0){
                    if(j==1){
                    cout<<"#";
                    }
                    else{
                    cout<<".";
                    }
                }
                else{
                   if(j==m){
                    cout<<"#";
                   }
                    else{
                    cout<<".";
                   }
                }

            }               
               
            
        }
        cout<<endl;
    }
}