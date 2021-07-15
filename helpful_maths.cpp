#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

// int count=0 , count2=0 , count3=0 , b=0;
// string s;
// cin>>s;
// // cout<<s.length();
// for(int i=0 ; i<s.length() ; i++){
//     if(s.at(i)=='1'){
//         count++;
//         cout<<count<<endl;
//     }
//     else if(s.at(i) == '2'){
//         count2++;
//         cout<<count2<<endl;
//     }
//     else if(s.at(i)=='3'){
//         count3++;
//         cout<<count3<<endl;
//     }

//     for(int i=0 ; i<count ; i++){
//         if(i==count){
//         cout<<"1+" ;    
//         }
//         else           
//     }
//     for(int i=0 ; i<count2 ; i++){
//         cout<<"2+";
//     }
//     for(int i=0 ; i<count3 ; i++){
//         if(i==count3-1){
//         cout<<"3";
//         }
//         else{
//             cout<<"3+";
//         }
//     }
// }
// return 0;

string s;
cin>>s;

vector<int>str;
int n=0 ;

for(int i=0 ; i<s.length() ; i++){
    if(s.at(i)=='1' || s.at(i)=='2' || s.at(i)=='3'){
        n =int(s.at(i))-48;
        str.push_back(n);
    }
}


sort(str.begin() , str.end());
for(int i=0 ; i<str.size() ; i++){
    if(i==str.size()-1){
    cout<<str[i];
    }
    else{
        cout<<str[i]<<"+" ;
    }
}





}