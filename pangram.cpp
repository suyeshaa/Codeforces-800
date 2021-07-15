#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   int n , count=0;
   cin>>n;
   string s;
   cin>>s;
   int a[26]={0};
   int c;
   char d;
//    for(int i=0 ; i<n ; i++){
//        d=s.at(i);
//        s.at(i)=tolower(c);
//    }

   transform(s.begin() , s.end() , s.begin() , ::tolower);
//    cout<<s<<endl;
   for(int i=0 ; i<n ; i++){
       c= (int)s.at(i);
       a[c-97]++;
   }
//    for(int i=0 ; i<n; i++){
//        cout<<a[i]<<" ";
//    }   

   for(int i=0 ; i<26 ; i++){
       if(a[i]==0){
           count++;           
       }
   }

   if(count==0){
       cout<<"YES";
   }
   else{
       cout<<"NO";
   }

   

}