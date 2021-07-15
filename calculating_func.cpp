#include<bits/stdc++.h>
using namespace std;
// int main(){
//     long long int n;
//     cin>>n;
//     long long int sum=0;
//     for(int i=1 ; i<=n ; i++){
//         sum= sum+ pow(-1,i) *i;     
//     }
//     cout<<sum;
//     return 0;
// }

int main(){
    long long int n , a=0;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
    }
    else{
        a= -1 * (n+1) /2;
        cout<<a;
    }
}

