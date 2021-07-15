#include<iostream>
using namespace std;
int main(){
    int n, k , t , s , sum=0 , count=0;
    cin>>n ; 
    cin>>k;
    t=240-k;
    for(int i=1 ; i<=n ; i++){
            
        s = 5*i;
        sum=sum+s;
        if(sum>t){
            break;
            
        }
        count++;
    } 

    cout<<count; 
       

}