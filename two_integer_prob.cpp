// #include<iostream>
// using namespace std;
// int main(){
//     long long int t, a,b, c=0, d=0;
//     cin>>t;
//     while(t--){
//         cin>>a;
//         cin>>b;
//         if(a>b){
//             c=a-b;
//             cout<<c<<endl;;
//             // cout<<a+1<<endl;

//             // while(a>10){
//             //     a=a-10;
//             //     count++;
//             // }
//         }
//         else if(b>a){
//             b=(b-a)/2;
//             cout<<b+1<<endl;
//             // while(b>10){
//             //     b=b-10;
//             //     count++;
//             // }
//         }
//         else{
//             cout<<0<<endl;
//         }  
//     }
// }


#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    long long int a,b;
    while(t--){
        cin>>a;
        cin>>b;
        if(a>b){
            if((a-b)%10==0){
                 cout<<(a-b)/10<<endl;
            }
            else{
                 cout<<((a-b)/10)+1<<endl;

            }
           
        }
        else if(b>a){
            if((b-a)%10==0){
                cout<<(b-a)/10<<endl;
             }
            else{
                cout<<((b-a)/10)+1<<endl;
             }
        }
        else{
            cout<<0<<endl;
        }
    }
}