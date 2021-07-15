#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , count=0;
    cin>>n;
    // string str;
    // int count=0;
    // while(n--){
    //     cin>>str;
    //     for(int i=0 ; i< str.length() ; i++){
    //         if(str.at(i)==str.at(i+1) && str.at(i)=='O'){
    //             count++;      
    //             str.at(i) = '+' ;
    //             str.at(i+1) = '+' ;      
    //             break;                
    //         }
    //     }
    //     if(count>0){
    //         cout<<"YES"<<endl;
    //         cout<<str<<endl;
    //     }
    //     else{
    //         cout<<"NO"<<endl;
    //     }
    // }

    char a[n][5];

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<5 ; j++){
            cin>>a[i][j] ;
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<4 ;j++){
            if(a[i][j] == a[i][j+1] && a[i][j]=='O'){
                count++ ;
                a[i][j]= '+';
                a[i][j+1] = '+' ;
                break;
            }
        }
        if(count>0){
            break;
        }
    }

    if(count>0){
        cout<<"YES"<<endl;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<5 ; j++){
                cout<<a[i][j] ;
            }
            cout<<endl;
        }
    }

    else{
        cout<<"NO";
    }
    
    

}