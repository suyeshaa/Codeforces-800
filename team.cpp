#include<iostream>
using namespace std;
int main(){
    int q;
    // q is the number of problems
    cin>>q;
    int count=0;
    bool p , v ,t ;
    while(q){
    cin>>p;
    cin>>v;
    cin>>t;
    if(p==1&&v==1 || v==1&&t==1 || t==1&&p==1){
        count++;
    }

    q--;
}
 
    cout<<count<<endl;
    return 0;

}