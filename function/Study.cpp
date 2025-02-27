#include <iostream>
using namespace std;
int max(int num1, int num2){
    if(num1	 > num2){
        return num1;
    }
    else{
        return num2;
    }
}
int min(int num1, int num2){
    if (num1<num1)
    {
        return num2;
    }
    else{
        return num1;
    }
}
int  main(){
    int num1, num2;
    cout<<"Enter Number 1  :";
    cin>>num1;
    cout<<"Enter Number 2  :";
    cin>>num2;


    cout<<"-----------------------------------"<<endl;
    cout<<"Maximum Is  :"<<max(num1,num2)<<endl;
    cout<<"Minimum Is  :"<<min(num1,num2);
}