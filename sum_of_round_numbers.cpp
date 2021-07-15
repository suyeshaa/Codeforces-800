#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int n , a , count=0 , d=0;
void counter(int n){
    int count=0;
     while(n>0){
            int a=n%10;
            n=n/10;
            if(a!=0){
                count++;
            }
       }
       cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;    
    while(t--){ 
        d=0;      
        cin>>n;
        counter(n);
        while(n>0){
        a=n%10;
        n=n/10;
        if(a!=0){
            cout<<a*(pow(10,d))<<" ";  
           // count++;     
          
        }
        d++;          
        }  
        // cout<<count<<endl;       
      
    }

    
    return 0;
    
}