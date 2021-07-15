#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n,m;
    cin>>n;
    cin>>m;
    char a[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y'){
                count++;
            }
        }
    }
    if(count>0){
        cout<<"#Color"<<endl;
    }
    else{
        cout<<"#Black&White"<<endl;
    }
}