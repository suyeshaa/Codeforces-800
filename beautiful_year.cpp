#include<bits/stdc++.h>
using namespace std;
bool digits(int y){
    int a , b, c ,d;
    d= y % 10;
    y=y/10;
    c= y%10;
    y=y/10;
    b= y%10;
    a= y/10;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int y;
    cin>>y;
    
    for(int i=0 ; i<1000 ; i++){
        y= y+1;
        if(digits(y) == true){
            break;
        }
    }
    cout<<y<<endl;
}

//     }
// }
//   int a[4];
//  int c0=0, c1=0 , c2=0 , c3=0 , c4=0 , c5=0 , c6=0 , c7=0 , c8=0 , c9=0 ; 
// bool digits(){
//      for(int i=0 ; i<4 ; i++){
//         if(a[i]==0){
//             c0++;
//         }
//         else if(a[i]==1){
//             c1++;
//         }
//         else if(a[i]==2){
//             c2++;
//         }
//         else if(a[i]==3){
//             c3++;
//         }
//         else if(a[i]==4){
//             c4++;
//         }
//         else if(a[i]==5){
//             c5++;
//         }
//         else if(a[i]==6){
//             c6++;
//         }
//         else if(a[i]==7){
//             c7++;
//         }
//         else if(a[i]==8){
//             c8++;
//         }
//         else{
//             c9++;
//         }
        
//     }
//     if(c0>=0&&c1>=0&&c2>=0&&c3>=0&&c4>=0&&c5>=0&&c6>=0&&c7>=0&&c8>=0&&c9>=0){
//         return true;        
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int y;
//     int i=0;
//     cin>>y;
//     while(y){
//         a[i++]=y%10;
//         y=y/10;
//     }
     
//    while(digits()==false){
//        y=y+1;
//    }  
//    cout<<y;   
// }
// string s;
// bool digits(){
//     for(int i=0 ; i<s.length() ;i++){
//         for(int j=0 ; j<s.length() ; j++){
           
//             if(s.at(i)==s.at(j) && i!=j){
//                 return true;
//             }
//             else{
//                 return false;
//             }            
//         }
//     }
// }
// int main(){
    
//     cin>>s;
//     int n =stoi(s);
//     for(int i=0 ; i<1000 ; i++){
//         n=n+1;
//         s= to_string(n);
//         if(digits()==true){
//             break;
//         }
//     }
//     cout<<n;
//     return 0;
// }


// int main(){
//     string y;
//     cin>>y;
//     int s=0;
//     int dig;
//     string year;
//     set<char>t;
//     bool bful_year = true;
//     while(bful_year=true){
//         t.clear();
//         s= stoi(y) +1;  
//         year = to_string(s); 

//         for(auto x : year){
//             t.insert(x);
//         }
    
//         if(t.size()==4){
//             break;
//         }
            
//     }
//     cout<<s;
// }



// int main(){
//     int y;
//     cin>>y;
//     int a , b, c ,d;
//     while(a>0){

//     }

