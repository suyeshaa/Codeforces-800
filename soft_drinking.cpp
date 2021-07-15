#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k ,l ,c, d, p ,nl , np , mini=0;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    k = (k*l) / nl;
    c= c*d;
    p = p/np;

    mini = min({k , c, p});

    mini = mini/n;
    cout<<mini;


}