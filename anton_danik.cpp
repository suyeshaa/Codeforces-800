#include<iostream>
using namespace std;
int main(){
    int n , count1=0 , count2=0 ; 
    cin>>n;
    string s;
    cin>>s;
    // s.length()=n;
    for(int i = 0 ; i<n ; i++){
        if(s.at(i)=='A'){
            count1++;
        }
        else{
            count2++;
        }
    }

    if(count1==count2){
        cout<<"Friendship"<<endl;
    }
    else if(count1>count2){
        cout<<"Anton"<<endl;
    }
    else{
        cout<<"Danik"<<endl;

    }

    return 0;



}