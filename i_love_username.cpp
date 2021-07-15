#include<iostream>
using namespace std;
int main(){
    int t , count=0 , d=0,e=0;
    cin>>t;
    int a[t];
   for(int i=0 ; i<t ; i++){
       cin>>a[i];
   }

   for(int i=1 ; i<t ; i++){
       d=0;
       e=0;
       for(int j=0 ; j<i ; j++){
           if(a[i]>a[j]){
               d++;
           }
           else if(a[i]<a[j]){
               e++;
           }
        }
           
       if(i==d){
           count++;
       }
       if(i==e){
           count++;
       }
   }

   cout<<count;

}