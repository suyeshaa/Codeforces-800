#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c , minim_1=0 , minim_2=0 , minim_3=0 , sum=0;
    cin>>a>>b>>c;

    minim_1 = min(a ,b);
    // cout<<minim_1<<endl ;
    sum += minim_1 ;
    // cout<<sum<<endl;

    minim_2 = min( a+b , c ) ;
    // cout<<minim_2<<endl ;


    sum += minim_2 ;
    // cout<<sum<<endl;

    minim_3 = min( max(a,b) , c + minim_1 );
    // cout<<minim_3<<endl ;

    sum += minim_3 ;
    // cout<<sum<<endl;


    cout<<sum;



}