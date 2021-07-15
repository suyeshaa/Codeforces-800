#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b, c;
    for(int i=0 ; i<n ;i++){
        cin>>a[i];
    }

    b= *max_element(a, a+n);
    // cout<<b<<endl;
    int idx1= distance(a, find(a+n , a ,b));
    // cout<<idx1<<endl;
    for(int i=idx1-1 ; i>=0 ; i--){
        a[i+1]=a[i];
    }
    a[0]= b;
    for(int i=0 ; i<n ;i++){
        cout<<a[i]<<" ";
    }


    c=*min_element(a, a+n);
    int idx2= distance(a, find( a , a+n ,c));
    // cout<<idx2<<endl;
    idx2= n-idx2-1;
    // cout<<idx2<<endl;
    // cout<<idx1+idx2;
}
    
    
// int n ;
// cin>>n;
// vector<int> a;
// for(int i=0 ; i<n ; i++){
//     a.push_back(i);
// }
// int b= *max_element(a.begin() , a.end());
// int idx1= distance(a.begin() , find(a.begin() , a.end() ,b));


// }
