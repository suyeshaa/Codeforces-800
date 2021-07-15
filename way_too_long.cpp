#include<iostream>
using namespace std;
int main(){
    int t , m;
    string s;
    cin>>t;
    // t is the number of test cases
    while(t){
        cin>>s;
        if(s.length()>=10){
            m= s.length();
            cout<<s.at(0)<<m-2<<s.at(m-1)<<endl;
        }
        else{
            cout<<s<<endl;
        }
        t--;

    }
    return 0;
}