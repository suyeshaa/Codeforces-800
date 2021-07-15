#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ,w, h, n , sheet=1;
    cin>>t;
    while(t--){
        sheet=1;
        cin>>w>>h>>n;

        while(w>=1 && h>=1){
            if(w%2 == 0){
                w = w/2;
                sheet= sheet*2;
            }
            else if(h%2==0){
                h=h/2;
                sheet = sheet*2 ;
            }
            else if( w%2!=0 && h%2!=0){
        
                    break;
    
            }
        }

        
            if(sheet>=n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        

    }

}