#include <iostream>
using namespace std;
int main(){
    float dolar, reil, result, exchange;
    int opt;
    cout<<"Exchange Money "<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"1. From Dolar To Reil  "<<endl;
    cout<<"2. From Reil To dolar  "<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Chose One Option (1-3) :";
    cin>>opt;
    switch (opt)
    {
    case 1:
        cout<<"Enter Money  [$$$$$$$$$]:";
        cin>>dolar;
        cout<<"Enter Exchange Money    :";
        cin>>reil;
        result = dolar * reil;
        cout<<"Mer Luy Klun Eng Tv :"<<result;
        break;
    case 2:
        cout<<"Enter Money [RRRRRRRRR]:";
        cin>>reil;
        cout<<"Enter Exchange Money   :";
        cin>>dolar;
        result = reil / dolar;
        break;
    
    default:
        break;
    }
}