#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t ,n , sum=0 , count=0;
    cin>>t;
    while(t--){
        // sum=0;
        // cin>>n;
        // if(n%2==0){
        //     long long int a[n];
        //     for(int i=0 ; i<n ; i++){
        //         cin>>a[i];
        //     }
        //     vector<int>vec{0};
        //     for(auto x : a){
        //         vec.push_back(x);
        //     }
        //     sum= accumulate(vec.begin() , vec.end() , 0);
        //     // cout<<sum<<endl;
        //     if(sum%2==0){
        //         cout<<"YES"<<endl;
        //     }
        //     else{
        //         cout<<"NO"<<endl;
        //     }
        // }
        // else{
        //     long long int a[n];
        //     for(int i=0 ; i<n ; i++){
        //         cin>>a[i];
        //     }
        //     cout<<"NO"<<endl;
        // }
        
        sum=0;
        count=0;        
        cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }

        for(int i=0 ; i<n ; i++){
            sum = sum+a[i];
        }

        if(n%2==0){
            if(sum%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

        else{
            if(sum%2==0){
                for(int i=0 ; i<n ; i++){
                    if(a[i]==1){
                        count++;
                    }
                }

                if(count>=2){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }

        }


    }



}