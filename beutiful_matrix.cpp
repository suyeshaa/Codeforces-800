#include<iostream>
using namespace std;
int main(){
    int x,y;
    int a[5][5];
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            if(a[i][j]==1){
                x=i;
                y=j;
            }
        }
    }

   if(x>2){
       x= x-2;
   }
   else{
       x=x-2;
       x=x*(-1);
   }
   if(y>2){
       y=y-2;
   }
   else{
       y=y-2;
       y=y*(-1);
   }
   cout<<x+y<<endl;
}