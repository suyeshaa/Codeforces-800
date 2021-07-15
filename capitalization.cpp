#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char a;
    a = s.at(0);
    a = toupper(a);
    s= s.erase(0, 1);
    s= a+s;
    cout<<s<<endl;
}