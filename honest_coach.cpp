#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t , n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        sort(a , a+n);
        int lowest=1000;
        for(int i=0 ;i<n-1 ; i++){
            if(a[i+1]-a[i]<lowest){
                lowest = a[i+1] - a[i];            
            }                                   
        }

        cout<<lowest<<endl;

    }
}