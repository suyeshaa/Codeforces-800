#include<iostream>
using namespace std;
int main(){
    string s1;
    string s2;
    char c1 , c2;
    cin>>s1;
    cin>>s2;
    for(int i=0 ; i<s1.length(); i++){
        c1=s1[i];
        s1[i]=tolower(c1);
    }
    for (int i = 0; i < s2.length(); i++){
        c2=s2[i];
        s2[i]=tolower(c2);
        
    }
    
   cout<<s1.compare(s2)<<endl;;
   return 0;
}
