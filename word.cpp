#include<iostream>
using namespace std;
int main(){;
    string s;
    cin>>s;
    int lower=0 , upper=0;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i]>= 'a' && s[i]<='z'){
            lower++;
        }
        else if(s[i]>= 'A' && s[i]<='Z'){
            upper++;
        }
    }

    if(lower>=upper){
        for(int i=0 ; i<=s.length() ; i++){
            
            s[i]= tolower(s[i]);
        }
        cout<<s;
    }
    else if(upper>lower){
        for(int i=0 ; i<=s.length() ; i++){
            s[i]= toupper(s[i]);
        }
        cout<<s;
    }
    
    return 0;
    
}