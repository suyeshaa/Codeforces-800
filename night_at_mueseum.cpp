#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // int a[s.length()];
    int count=0;
    // for(int i=0 ; i<s.length() ; i++){
    //     int t = int(s.at(i))- 97; 
    // }


    int pos_1 = int(s.at(0)) -97 ;
    if(pos_1 < 26-pos_1){
        count = abs(pos_1);
    }
    else{
        count = abs(26 - pos_1) ;
    }

    for(int i = 1 ; i<s.length() ; i++){
        int next_pos = abs( int(s.at(i)) - int(s.at(i-1)) );
        if(next_pos > abs( 26 - next_pos) ){
            count += abs( 26 - next_pos );
        }
        else{
            count+= next_pos ;
        }

    }

    cout<<count<<endl;


}