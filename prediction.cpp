#include<bits/stdc++.h>
using namespace std;

bool prime(int num){
    int count =0;
    if(num==0){
        return false;
    }
    for(int i=2 ; i<=num ; i++){
        if(num%i == 0){
            count++ ;
        }
    }
    if(count>1){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    int n , m , check =0;
    cin>>n>>m;
    if(prime(m) == false){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=n+1 ; i<m ; i++){
            if(prime(i) == true){
                check ++ ;            
            }
        }
        if(check == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}