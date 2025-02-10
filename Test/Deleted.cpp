#include <iostream>
using namespace std;
int main(){
    int lek1, lek2 , maximum , minimum;
    
    cout<<"Enter number of 1  :";
    cin>>lek1;
    cout<<"Enter number of 2  :";
    cin>>lek2;
    cout<<"---------------------------------"<<endl;
if (lek1>lek2)
{
    maximum = lek1;
    minimum = lek2;
}
if (lek2>lek1)
{
    maximum = lek2;
    minimum = lek1;
}
    cout<<"Maximum :"<<maximum<<endl;
    cout<<"Minimum :"<<minimum<<endl;
}