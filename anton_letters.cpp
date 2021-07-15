#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int main(){
// string s;
// getline(cin,s);
// int count=0;
// for(int i=0 ; i<s.length() ; i++){
//     int j;
//     for(j=0 ; j<i ; j++){
//         if(s.at(i)==s.at(j)){
//             break;
//         }
//     }
//     if(i==j){
//         count++;
//     }
// }
// cout<<count;
// }


int main(){
    string s;
    getline(cin,s);
    int c , count=0;
    int a[26]={0};
    for(int i=1 ; i<s.length() ; i++){
        c=(int)s.at(i);
        // cout<<c<<endl;
        a[c-97]++;
    }
    // for(int i=0 ; i<26 ; i++){
    //     cout<<a[i]<<" ";
    // }
    for(int i=0 ; i<26 ; i++){
        if(a[i]>0){
            count++;
        }
    }

    cout<<count;
}
