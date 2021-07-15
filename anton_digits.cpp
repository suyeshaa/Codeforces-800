#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a, b, c, d , minim_1=0 , minim_2=0 , sum=0 , num_2=0;
    cin>>a>>b>>c>>d ;

    minim_1 = min({a,c,d});

    sum += 256*minim_1 ;
    num_2 = a - minim_1 ;
    minim_2 = min(num_2 , b);
    sum += 32*minim_2 ;

    cout<<sum;


}