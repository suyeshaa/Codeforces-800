#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n, k , max=0 , min=0 , sum=0;
    
    while(t--){
        cin>>n;
        int a[n] , b[n];
        cin>>k;
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        
        for(int i=0 ; i<n ; i++){
            cin>>b[i];
        }
        
        sort(a , a+n);
           
        sort(b , b+n);
        
        for(int i=0 ; i<k ; i++){
            if(a[i]<b[n-i-1]){
            swap(a[i] , b[n-i-1]);
            }
        }
        sum=0;
        for(int i=0 ; i<n ; i++){
            sum=sum+a[i];
        }   

        cout<<sum<<endl;    


    }
}