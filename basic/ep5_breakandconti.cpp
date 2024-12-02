#include <iostream>
using namespace std;
int main(){
    // int num ;
    // cin>>num;
    // int i=2;
    // for(;i<num;i++){
    //     if(num%i==0){
    //         cout<<i<<" not prime "<<endl;
    //     }
    // }
    // if(i==num){
    //     cout<<"prime"<<endl;
    // }

    // int num ;
    // cin>>num;
    // int i;
    // for(i=2;i<num;i++){
    //     if(i%2 !=0){
    //         continue;
    //     }
    //     cout<<i<<" ";
    // }

    int num;
    cin>>num;

    int i = 2;
    
    for(; i<num;i++){
        if(num%i==0){
            cout<<i<<"not prime no "<<endl;
            break;
        }
         }

        if(num==i){
            cout<<i<<"prime no"<<endl;
        }
   
}