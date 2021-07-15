#include<iostream>
using namespace std;
int main(){
    long long int t ,a ,c , count=0;
    cin>>t;
    // while(t--){
    //     count=0;
    //     cin>>a;
    //     for(int i=1 ; i<a ; i++){
    //         c=a-i;
    //         if(c>i){
    //             count++;
    //         }
    //     }
    //     cout<<count;
    // }

    while(t--){
        cin>>a;
        if(a==1 || a==2){
            cout<<0<<endl;
        }
        else if(a%2==0){
            c= (a/2)-1;
            cout<<c<<endl;
        }
        else{
            c=a/2 ;
            cout<<c<<endl;
        }
    }

}