#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int p=0,q=0,r=0,s=0;
    long long int a[4];
    for(int i=0 ; i<4 ; i++){
        cin>>a[i];
    }
    sort(a, a+4);
    q= (a[0] + a[1])-a[3];
    p= a[0]-q;
    r=a[1]-q;

    cout<<p<<" ";
    cout<<q<<" ";
    cout<<r<<" ";

}