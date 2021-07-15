
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ,a,b,c,n , s=0, sum=0;
    cin>>t;
    while(t--){
        sum=0;
        s=0;
        cin>>a>>b>>c>>n;
        s= max({a,b,c});
        // cout<<s;
        sum = (s-a) + (s-b) + (s-c);
        // cout<<sum;
        if(n>=sum){
            if((n- sum)>= 0){
                if((n-sum)%3 == 0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else if((n-sum)<0){
                cout<<"NO"<<endl;
            }
        }
           
        else if(sum>n){
            cout<<"NO"<<endl;
        }

    }
}
