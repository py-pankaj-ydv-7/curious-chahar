#include <iostream>
using namespace std;
int main(){
      int r;
      cin>>r;
    
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
    //   int spaces = r-1;

    //   for(int i=0; i<r;i++){
    //     for(int j=0;j<spaces;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //     spaces--;
    //   }

    //   spaces =1;
    //   for(int i=r-1;i>0;i--){
    //     for(int j=0;j<spaces;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //     spaces++;
    //   }


//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
//  1 2 3 4
//   1 2 3
//    1 2
//     1
    
    //   int spaces = r-1;

    //   for(int i=0; i<r;i++){
    //     for(int j=0;j<spaces;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<j+1<< " ";
    //     }
    //     cout<<endl;
    //     spaces--;
    //   }
    
    //   spaces =1;
    //   for(int i=r-1;i>0;i--){
    //     for(int j=0;j<spaces;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i;j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    //     spaces++;
    //   }

    for(int i=0;i<r;i++){
        for(int j=0;j<i+1;j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}