#include <iostream>
using namespace std;
int main(){
    int age,opt;
    string name;

    cout<<"Hello Babe "<<endl;
    cout<<"Do you Love me"<<endl;
    cout<<"1 = Yes"<<endl;
    cout<<"2 = No"<<endl;
    cout<<"Enter 1 Or 2";
    cin>>opt;
do
{
    switch (opt)
    {
    case 1:
        cout<<"Thank You for Love Me";
        cout<<"But I don't love you ";
    break;
    case 2:
        cout<<"Lop Men ke khom sl ot sl ke vinh "<<endl;
        cout<<"Jam mer hah nh jes lg finger style ot lg oy sdab heh";
    break;
    default:
        cout<<"Pler Men Ke oy Pjol 1 and 2  :";
    break;
    }
} while (opt != 2);
return 0;
}