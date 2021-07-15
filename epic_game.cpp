#include<bits/stdc++.h>
using namespace std;

int gcd(int num_1 , int num_2){
    if(num_2==0){
        return num_1;
    }
    else{
        return gcd(num_2 , num_1 % num_2) ;
    }
}

int main(){
    int a , b, n , hcf=0;
    cin>>a>>b>>n;
    
    for(int i=1 ; i<1000 ; i++){
        if(i%2==0){
            hcf = gcd(b ,n);
            n= n-hcf ;
            if(n==0){
                cout<<"1"<<endl;
                break;
            }

        }
        else{
            hcf = gcd(a ,n);
            n= n-hcf ;
             if(n==0){
                cout<<"0"<<endl;
                break;
            }
        }   

    }

}