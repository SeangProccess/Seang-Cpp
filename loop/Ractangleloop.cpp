#include <iostream>
using namespace std;
int main(){
    
    for (int i=1 ; i <=10; i++)//row
    {
        for (int a =i ; a<=10 ; a++)//column
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

}
//i=0 ; i<=10 ;true;
    //a=i ; a<=10 ;true;
    //a=1; a<=10; true;
    //a
// #include <iostream>
// using namespace std;
// //note : row loop 1 time col loop n time

// int main(){
//     for(int i = 1; i<=4; i++){//row
//         for(int j = i; j <= 4; j++){//col
//             cout<< "*";
//         }
//         cout<< endl;
//     }
// }