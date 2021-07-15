#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int t,n, sum1=0, sum2=0 ,p=0 ,q=0 , d=0;
    cin>>t;
    while(t--){
        sum1=0, sum2=0 ,p=0 ,q=0 , d=0;
        cin>>n;
        int a[n];
        for(int i=1 ; i<=n ; i++){
            a[i-1]=  pow(2,i);          
        }
        // for(int i=0 ; i<n ;i++){
        //     cout<<a[i]<<" ";
        // }
        

        d= (n-2)/2;
        // cout<<d<<endl;

        for(int i=0 ; i<d; i++){
            sum1 = sum1+  a[i];          
        }
        // cout<<sum1<<endl;
        for(int i=d ; i<n-2 ; i++){
            sum2 = sum2+a[i];
        }
        // cout<<sum2<<endl;

        p= sum1+a[n-1];
        q= sum2+a[n-2];

        if(p>q){
            cout<<p-q<<endl;
        }
        else{
            cout<<q-p<<endl;
        }   
    
    
    }
    return 0;
}