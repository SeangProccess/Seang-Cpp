#include <iostream>
using namespace std;

//syntax : void functionName(parament1,parament2,....){

//}
int id;
string name;

void myfunction(){

    cout<< "enter id   : ";
    cin>>id;
    cout<< "enter name : ";
    cin>>name;
}
void view(){
    cout<< id<<endl;
}

int main()
{
    myfunction();//function call
    view();
}