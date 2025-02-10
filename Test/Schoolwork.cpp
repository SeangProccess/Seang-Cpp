#include <iostream>
using namespace std;
int main(){
    int opt;
    float result, a , b;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Exit"<<endl<<endl;
    cout<<"Enter your Choice(1-5):";
    cin>>opt;
    cout<<"Enter Number :";
    cin>>a;
    cout<<"Enter Number :";
    cin>>b;
    
    switch (opt)
    {
    case 1:
        result= a + b;
         cout<<"Result :"<<result;
        break;
    case 2:
        result= a-b;
         cout<<"Result :"<<result;
         break;
    case 3:
    result= a*b;
     cout<<"Result :"<<result;
        break;
    case 4:
    result: a/b;
     cout<<"Result :"<<result;
        break;
    default:
        cout<<"Ort Mean Ey Teh"<<endl;
        break;
    }

}