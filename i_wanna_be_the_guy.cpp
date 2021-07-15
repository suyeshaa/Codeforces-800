#include<iostream>
using namespace std;
int n ,s ,t;
int a[101]={0};
bool func(){
    for(int i=1 ; i<=n ; i++){
        if(a[i]==0){
            return false;
        }
    }
    return true;
}

int main(){
    cin>>n;    
    
    cin>>s;
     int p[s];
    for(int i=0 ; i<s ; i++){
         cin>>p[i];
    }
    cin>>t;
    int q[t]; 
    for(int i=0 ; i<t ; i++){
         cin>>q[i];
    }

    int c;                            
    for(int i=0 ; i<s ; i++){
        c=p[i];
        a[c]++;
    }
    for(int i=0 ; i<t ; i++){
        c=q[i];
        a[c]++;
    }

    if(func()==false){
        cout<<"Oh, my keyboard!";
    }
    else{
        cout<<"I become the guy.";
    }

    return 0;

    
}