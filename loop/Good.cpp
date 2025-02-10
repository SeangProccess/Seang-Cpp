
    // syntax :
    //     for(start; condition; increament or decreameant){
    //         statement code;
    //     }
// #include <iostream>
// using namespace std;
// int main(){
  
    // for(int i = 1; i<10; i=i+2){
    //     cout<<i<<endl;
    // }

    
    // for(int i = 1; i<=5; i++){
    //     cout<<i*2<<endl;
    // }
    
    // for(int j = 1; j<10; j++){
    //     cout<<j*2 - 1<<endl;
    // }

// }

//note :
//i = 0; i<5; true ; hello
//i = 1; i<5; true ; hello
//i = 2; i<5; true ; hello
//i = 3; i<5; true ; hell0
//i = 4; i<5; false; no execute;


// i = 1+2 = 3; true;
#include <iostream>
using namespace std;
int main(){
    int n=10;
    for (int i=1 ;i<=n; i++)//row
    {
       for ( int j=1 ;j<=2*i-1; j++)//col
       {
        cout<<j;
       }
       cout<<endl;
    }
    
}

