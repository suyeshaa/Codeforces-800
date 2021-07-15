#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n , b=0, sum=0;
    cin>>n;
    long long int a[n];
    for(int i=0 ; i<n ;i++){
        cin>>a[i];
    }

    b= *max_element(a , a+n);

    for(int i=0 ; i<n ; i++){
        sum = sum- a[i] +b;
    }

    cout<<sum;


}