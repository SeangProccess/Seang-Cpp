#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float tax, salary, Bo, total;

    cout<<"Salary  :";
    cin>>salary;

if (salary>500)
{
    tax = 0.5;
}
else if (salary>=300)
{
    tax = 0.4;
}
else if (salary>=250)
{
    tax = 0.3;
}
else if (salary<250)
{
    tax = 0.2;
}
    Bo = tax * salary;//600*0.5 = 300
    total = salary -Bo;
    cout<<"Tax  :"<<tax*100<<"%"<<endl;
    cout<<"Total Salary :"<<total;


}