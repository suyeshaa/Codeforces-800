#include<iostream>
using namespace std;
int main(){
    int n , t=0;
    cin>>n;
    string z;
    while(n){
        cin>>z;
        if(z=="X--" ||z== "--X"){
            t=t-1;
        }
        else if(z=="X++" || z=="++X"){
            t=t+1;
        }
        

        n--;
    }
    cout<<t<<endl;
    return 0;
}