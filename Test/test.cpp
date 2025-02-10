#include <iostream>
using namespace std;
int main(){

    int opt, qty;
    float total,payment,discount;
    string promocord , answer;
    system("cls");
    cout<<"Drink Store"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"1. ABC Beer      2$"<<endl;
    cout<<"2. Ancher Beer   1$"<<endl;
    cout<<"3. Hanuman Beer  1.5$    (Ber tinh 5 or lers 5 k'pong discount oy 5%)"<<endl;
    cout<<"4. Cambodia Beer 0.75    (ber brer promocord: DUMA DUMA discount oy 10% )"<<endl;
    cout<<"===================================="<<endl;
    cout<<"Jog tinh sra ey rers muy mk : ";
    cin>>opt;
    cout<<"Yk man k'pong : ";
    cin>>qty;

    switch (opt)
    {
    case 1:
        payment = 2 * qty;
        break;
    case 2:
        payment = 1 * qty;
        break;
    case 3:
        if (qty >=5)
        {
            cout<<"Tv ke discount oy 5%";
            discount = 5;
        }
        else 
        {
            discount = 0;
        }
            total = qty * 1.5;
            payment = total - discount/100 * total;
        break;
    case 4:
        cout<<"Mean promocord ot ng????"<<endl;
        cin>>answer;
        if (answer=="Mean")
        {
            cout<<"Mean enter jol tv Yii jam tea brab : "<<endl;
            fflush (stdin);
            getline(cin,promocord);
            if (promocord =="DUMA"
            )
            {
                cout<<"Discount oy 10% jos anit"<<endl;
                discount = 10;
            }
            else 
            {
                cout<<"C'kut men ber ot mean teh kom dak tv vea mix  "<<endl;
                discount = 0;
            }
        }
        else
        {
           cout<<"Ngob ot mean promocord hes !!!"<<endl;
           cout<<"Ot ot tv mean tha ey"<<endl;
           cout<<"jg kit t'lai derm hz "<<endl;
        }
        total = 0.75 * qty;
        payment = total - discount/100 *qty;
        break;
        
    default:
        break;
    }
    cout<<"S'rob luy os pon ng merl tvvvvv :"<<payment<<'$';
}