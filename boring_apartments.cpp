#include<iostream>
using namespace std;
// int a , sum=0;
// int add(int number){
//     while(number>0){
//         a = number%10 ;
//         number=number/10;
//         sum = sum+a;        
//     }
//     return sum;
// }
// int main(){
//     int t , x , summation=0;
//     cin>>t;
//     while(t--){
//         cin>>x;
//         for(int i=1 ; i<=1000 ; i++){
//             for(int j=0 ; j<4 ; j++){
//                 i= j*10 +i;
//                 summation = summation+add(i);            
//                 if(x==i){ 
//                     cout<<x<<" "<<i<<" ";
//                     cout<<summation<<endl;                  
//                     break;                    
//                 }
//             }         
//         }
//     }
// }

int count=0 , sum=0;
int last_digit(int numb){
    numb = numb%10;
    return numb;
}
int number_digits(int numb){
    count =0;
    while(numb>0){
        numb = numb/10;
        count++ ;
    }
    return count;
}
int main(){
    int t , n;
    cin>>t;
    while(t--){
        int dig=0 ,keypress=0;
        sum=0;
        cin>>n;
        dig = last_digit(n);
        keypress= number_digits(n);
        for(int i=1 ; i<=dig ; i++){
            if(i!=dig){
                sum= sum+10;
            }
            else{
                for(int j=1 ; j<=keypress ; j++){
                    sum = sum+ j ;                    
                }
            }

        }
        cout<<sum<<endl;      
    }

}