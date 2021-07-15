#include<iostream>
using namespace std;
int main(){
    long long int n , count=0;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        if(s=="Icosahedron"){
            count=count+20;
        }
        else if(s=="Cube"){
            count=count+6;
        }
        else if(s=="Octahedron"){
            count=count+8;
        }
        else if(s=="Dodecahedron"){
            count=count+12;
        }
        else{
            count=count+4;
        }
    }

    cout<<count;

}