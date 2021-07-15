#include<iostream>
using namespace std;
int main(){
    // int n, count=0;
    // cin>>n;
    // int a[n];
    // for(int i=0 ; i<n ; i++){
    //     cin>>a[i];
    // }
    // for(int i=0 ; i<n-1 ; i=i+2){
    //     if(a[i]>a[i+1]){

    //     }
    //     else if(a[i]<a[i+1]){
    //         count++;
    //     }
    // }


long long int n , sum=0 ,a,count=0;
cin>>n;
while(n--){
    cin>>a;
    if(a>0){
        sum=sum+a;
    }
    else{
        if(sum>0){
        sum=sum-1;
        }
        else{
            count++;
        }
    }

}
cout<<count;


}
