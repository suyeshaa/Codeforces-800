#include<iostream>
#include<vector>
#include<set>
using namespace std;
// int main(){
//     int count=0;
//     string s ;
//     cin>>s;
//     for(int i=0 ; i<s.length() ; i++){
//         for(int j=i ; j<s.length()-1; j++){
//             if(s.at(i)==s.at(j+1)){
//                 count++ ;
//             }
//         }
//     }
//     int m= s.length()-count;
//     if(m%2==0){
//         cout<<"CHAT WITH HER!"<<endl;
//     }
//     else{
//         cout<<"IGNORE HIM!"<<endl;
//     }
//     return 0;
// }


int main(){
    string s;
    cin>>s;
    set<char>a;

    for(auto x: s){
        a.insert(x);       
    }

    if(a.size() %2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

    
    
}