#include <iostream>
using namespace std;
int main()
{

    // int age;
    // cin>>age;
    // if (age>=18)
    // {
    //     cout<<"you can vote ";
    // }
    // else {
    //     cout<<"you can't vote ";
    // }
    // fizz /3 , buzz /5 , bang /5&&3

    // int n;
    // cin>> n;
    // if(n%5==0 && n%3==0){
    //     cout<<"big bang";
    // }
    // else if (n%5==0){
    //     cout<<"fizz";
    // }
    // else if(n%3==0)
    // {
    //   cout<<"buzz";
    // }

    // else{
    //     cout<<"sad ";
    // }



    /******** Switch Case */
 int n;
 cin>>n;
    switch (n%3)
    {
    case 0:
        cout<<"Happy";
        break;
    
    case 1:
        cout<<"Sad";
        break;
    
    case 2:
        cout<<"close";
        break;
    
    default:
        break;
    }
    
}
