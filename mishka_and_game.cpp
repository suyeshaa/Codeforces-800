#include<iostream>
using namespace std;
int main(){
    int n,a,b , m=0 ,c=0;
    cin>>n;
    while(n--){
        cin>>a;
        cin>>b;
        if(a>b){
            m++;
        }
        else if(b>a){
            c++;
        }

        
    }   
    if(m>c){
            cout<<"Mishka";
        }
        else if(m<c){
            cout<<"Chris";
        }
        else{
            cout<<"Friendship is magic!^^";
        }
}