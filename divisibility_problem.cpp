#include<iostream>
using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int c=2*t;
//     int a[c];
//     for(int i=0 ; i<c ;i++){
//         cin>>a[i];
//     }
//     for(int i=0 ; i<c ; i=i+2){
//         if(a[i]>=a[i+1]){
//         cout<<a[i]%a[i+1]<<endl;
//         }
//         else if(a[i]<a[i+1]){
//             cout<<a[i+1]%a[i]<<endl;;
//         }
//     }
//     return 0;
// }



#include <stdio.h>
#include <string.h>
 
int main()
{
    long long int t, a, b, count;
    cin>>t;
 
    while(t--){
        count = 0;
        cin>>a;
        cin>>b;
 
        if (a % b != 0)
        {
            if (a > b)
            {
                count = b - (a % b);
            }
            else
            {
                count = b - a;
            }
        }
        cout<<count<<endl;
    }
}