#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    cout<<t/2<<endl;
    if(t%2==0){
    
        for(int i=0 ; i<t/2 ;i++){
            cout<<2<<" ";
        }
    }
    else{
        for(int i=0 ; i<t/2 ;i++){
            if(i==t/2-1){
                cout<<3;
            }
            else{
                cout<<2<<" ";
            }
            
        }
    }

    // for(int i=2; i<n ; i++){
    //     count=0;
    //     for(int j=1 ; j<=i/2 ; j++){
    //         if(i%j==0){
    //             count++;
    //         }
    //     }  
    //     if(count==1){
    //         a.push_back(i);
    //     }      
    // }

    // for(int i=0 ; i<n ; i++){
    //     cout<<a[i]<<" ";
    // }


    //     for(int i=0 ; i<n ; i++){
    //         n=n-a[i];
    //         if(n<=0){
    //             break;
    //         }
    //         cout<<a[i]<<" ";
    //     }
            

}