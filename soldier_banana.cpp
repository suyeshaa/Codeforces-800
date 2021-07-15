#include<iostream>
using namespace std;
int main(){
    int w , n ,k , m;
    cin>>k;
    cin>>n;
    cin>>w;
    m = (k*w*(w+1))/2;
    if((m-n)>=0){
        m=m-n;
        cout<<m;
    }
    else{
        cout<<0;
    }
   
    return 0;


}