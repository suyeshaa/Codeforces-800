#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t , s=0 ,p=0 ,q=0 , smallest=0;
    int l[5000]={0} , m[5000]={0} , n[5000]={0};
    cin>>t;
    int a[t];
    for(int i=0 ; i<t ; i++){
        cin>>a[i];
    }

    for(int i=0 ; i<t ; i++){
        if(a[i]==1){
            l[s] = i;
            s++;
        }
        else if(a[i]==2){
            m[p] = i;
            p++;
        }
        else{
            n[q]=i;
            q++;
        }
    }

    smallest = min({p,q,s});
    cout<<smallest<<endl;
    
    for(int i=0 ; i<smallest ; i++){
        cout<<l[i]+1<<" "<<m[i]+1<<" "<<n[i]+1;
        cout<<endl;
    }
        

 }


