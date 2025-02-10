#include <iostream>
using namespace std;
int main(){
    int id, hour, money, salary;
    string name;
    char gender;
    float tax, total ;



    cout<<"-----------------------------------"<<endl;
    cout<<"Enter ID    :";
    cin>>id;
    
    cout<<"Enter name  :";
    cin>>name;

    cout<<"Enter gender:";
    cin>>gender;

    cout<<"Enter hour  :";
    cin>>hour;

    cout<<"Enter money :";
    cin>>money;

    salary = money * hour;
    tax = 0.1*salary;
    total = salary - tax;

    cout<<"-----------------------------------"<<endl;
    cout<<"Staff ID    :"<<id<<endl;
    cout<<"Staff name  :"<<name<<endl;
    cout<<"Staff gender:"<<gender<<endl;
    cout<<"Staff hour  :"<<hour<<endl;
    cout<<"Staff money :"<<"$"<<money<<endl;
    cout<<"Staff salary:"<<"$"<<salary<<endl;
    cout<<"Staff tax   :"<<tax<<endl;
    cout<<"Staff total salary: "<<"$"<<total<<endl;
}