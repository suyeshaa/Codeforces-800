#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n ; 
    int a , b , p=0;   //p is the no of passengers in the tram
    cin>>n;
    int d[n];
    // while(n>0){
    //     cin>>a;
    //     cin>>b;
    //     p= p+ b-a;
        

    //     n--;
    // }

    for(int i=0 ; i<n ; i++){
        cin>>a;
        cin>>b;
        p=p+b-a;

        d[i]=p;        
    }
   
    cout<<*max_element(d, d + n);
    
}

