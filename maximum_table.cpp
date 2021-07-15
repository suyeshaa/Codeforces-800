#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n] = {0};

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ;j++){
            if(i==0){
                a[i][j]=1;
            }
            if(j==0){
                a[i][j]=1;
            }

            if(i!=0 && j!=0){
                a[i][j] = a[i][j-1] + a[i-1][j] ;
                
            }
            if(i==n-1 && j==n-1){
                cout<<a[i][j] ;
            }

           


        }

        
    }

}