#include <iostream>
#include<conio.h>
using namespace std;
int main(){
    int qty,opt;
    float total, payment, discount;
    char ans;
    string promocode;

    cout<<"Drink Store"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"1.Coca    :$0.5"<<endl;
    cout<<"2.Sting   :$1"<<endl;
    cout<<"3.Fanta   :$1.5\t(Get 5% discount off on 5 or more cans)"<<endl;
    cout<<"4.Pepsi   :$1.5\t(Use promo code: Prozzcherm   for 10% off)"<<endl;
    cout<<"============================================"<<endl;
    cout<<"Enter the number of your choice   :";
    cin>>opt;
    cout<<"Enter the quantilty               :";
    cin>>qty;
    switch (opt)
    {
    case1:
        payment = 0.5*qty;
        break;
    case 2:
        payment = 1*qty;
        break;
    case 3:
        if (qty>=5)
        {
            discount = 5;
            total = 1.5*qty;
            payment = total - discount/100*total;

        }
        else{
        payment = qty * 1.5;
        }
        break;
        case 4:
        cout<<"Do you have promo code ????????"<<endl;
        cout<<"Please enter Y or N     :";
        cin>>ans;
  
        if (ans == 'y' || ans == 'Y')
        {
            cout<<"Enter your promocode   :";
            cin>>promocode;
            
            if (promocode == "Prozzcherm")
            {
            discount = 10;
            total = 1.5*qty;
            payment = total - discount/100*total;
            cout<<"Discount oy 10%"<<endl;
            }
            else{
            cout<<"Ber ot mean promocode kom jes tea dak"<<endl;
            payment = 1.5*qty;
        }
            
        }
        if (ans == 'n'|| ans == 'N')
        {
           
            payment = 1.5*qty;

        }

    break;
        
    default:
        break;
    }
    cout<<"Payment    :"<<payment;
}

