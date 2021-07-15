#include<iostream>
using namespace std;
int main(){
    int count=0;
   string s;
   cin>>s;
   for(int i=0 ; i<s.length() ; i++){
       if(s.at(i)=='4' || s.at(i)=='7'){
           count++ ;
       }
   }

   if(count==4 || count==7){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }

   return 0;
   
}