#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , temp=0  , sum1=0 , sum2=0;
    cin>>n;
    int a[n];

    // sort(a , a+n);
    // for(int i=0 ; i<n ; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;                                  //question pdhlo
    // for(int i=0; i<n ; i=i+2){
    //     sum1 = sum1 + a[i];        
    // }
    // for(int i=1 ; i<n ; i=i+2){
    //     sum2 = sum2 + a[i];        
    // }
    // if(sum2>=sum1){
    //     cout<<sum2<<" "<<sum1;
    // }
    // else{
    //     cout<<sum1<<" "<<sum2;
    // }

    // for(int i=n-1 ; i>0 ; i--){
    //     if(a[i]>a[n-1-i]){
    //         // i=i+1;
    //         sum1= sum1+a[i] ;
    //     }
    //     else{
    //         //  i=i-1;
    //         sum1 = sum1 + a[n-1-i];
    //     }
    // }

     
     
     for(int i=0 ; i<n ; i++){
         cin>>a[i];
     }
    
     bool flag = true;
    
     for(int i=0 , j=n-1  ; i<=j ;){
        if(a[i]> a[j]){
            temp = a[i];
            i++;
        }  
        else{
            temp = a[j];
            j--;
        }   
        if(flag){
            sum1 = sum1+temp;
        }
        else{
            sum2 = sum2 +temp;
        }
        flag = !flag ;    
     }


    cout<<sum1<<endl;
    cout<<sum2<<endl;

      
}