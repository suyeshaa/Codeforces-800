#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int sum=0 , mini=0;
    long long int t , s=0,p=0;
    cin>>t;
    int n;
    while(t--){
        sum=0;
        cin>>n;
        long long int a[n] , b[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        for(int i=0 ; i<n ; i++){
            cin>>b[i];
        }

        s= *min_element(a , a+n);
        p= *min_element(b , b+n);

        for(int i=0 ; i<n ; i++){
            a[i] = a[i]-s;
            // cout<<a[i]<<endl;
            b[i] = b[i] - p;
            // cout<<b[i]<<endl;
            if(a[i]>0 && b[i]>0){
                if(a[i]>b[i]){
                    sum = sum + a[i];
                    // cout<<sum<<endl;
                }
                else if(a[i]==b[i]){
                    sum=sum+a[i];
                    // cout<<sum<<endl;
                }
                else{
                    sum= sum + b[i];
                    // cout<<sum<<endl;
                }                
            }
            else{
                if(a[i]==0){
                    sum = sum+b[i];
                    // cout<<sum<<endl;
                }
                else{
                    sum = sum+a[i];
                    // cout<<sum<<endl;
                }
            }
        }

        cout<<sum<<endl;



    }
}