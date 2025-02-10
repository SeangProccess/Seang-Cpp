#include<iostream>
using namespace std;
int main(){
    int number1, number2;
    int maximum, minimum;
    
    cout<<"Enter number of 1  :";
    cin>>number1;
    cout<<"Enter number of 2  :";
    cin>>number2;
    cout<<"------------------------------"<<endl;
if(number1>number2){
    maximum = number1;
    minimum = number2;

}
if (number2>number1)
{
    maximum = number2;
    minimum = number1;

}
    cout<<"Minimum"<<minimum<<endl;
    cout<<"Maximum"<<maximum<<endl;
}
