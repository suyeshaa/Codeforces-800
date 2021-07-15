#include<iostream>
using namespace std;
int main(){
    int a[3];
    for(int i=0 ; i<3 ; i++){
        cin>>a[i];
    }
    int count=0; 
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<i ; j++){
            if(a[i]==a[j]){
                count= count+1;   
              
            }
        }
    }
    count=count+1;

    if(count>=2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}