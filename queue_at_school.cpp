#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, t;
    string s;
    cin>>n;
    cin>>t;
    cin>>s;
    while(t>0){ 
        for(int j=0 ; j<n-1 ; j++){
            
            if(s.at(j)=='B' && s.at(j+1)=='G'){
              
                swap(s.at(j) , s.at(j+1));
                j++;
                
             
            }

        }
        t--;
    }

    

    cout<<s; 

}