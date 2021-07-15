#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , max=0 , min=0 , count=0;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }


    int *s = &a[0];


    max = *max_element(a , a+n);
    min = *min_element(a, a+n);
    
    // cout<<max<<" "<<min;

    auto max_idx = find(a , a+n , max) - s;
    auto min_idx = find(a , a+n ,min) - s;

    for(int i=0 ; i<n ; i++){
        if(a[i]==min){
            if(i>min_idx){
                min_idx=i;
            }
        }
    }

    // cout<<max_idx<<" "<<min_idx<<endl;
    // cout<<n-1<<endl;

   
        if(max_idx < min_idx){
            count = max_idx + (n-1- min_idx);
            cout<<count;
        }
        else{
            min_idx++;
            count= max_idx + (n-1- min_idx);
            cout<<count;
        }
    


   



}