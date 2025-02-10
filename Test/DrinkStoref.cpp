#include <iostream>
using namespace std;
int main(){
    int quantilty,opt;
    float total, discount,payment;
    string promocode;
    char answer;
    system("cls");
again:
    system("Color 7");
    cout<<"Drink Store"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"1.Coca =     0.5$"<<endl;
    cout<<"2.Sting  =     1$"<<endl;
    cout<<"3.Fanta  =     1.5$ \t (Get 5% off on 5 or more cans)"<<endl;
    cout<<"4.Pepsi  =     1.5$ \t (Use promo code: Prozzcherm for 10% off)"<<endl;

    cout<<"-------------------------------------------"<<endl;
    cout<<"Enter the number of your choice:   ";
    system("Color 0A"); 
    cin>>opt;
    system("Color 7");
    cout<<"Enter the quantilty:  ";
    cin>>quantilty;
    
    switch (opt)
    {
    case 1:
            payment = 0.5* quantilty;
            
        
        
        break;
    case 2:
     
            payment = quantilty * 1 ;
    
        break;
    case 3:
        if (quantilty >= 5)
        {
            discount = 5;
            total = (1.5 * quantilty);
            payment = total - discount/100*total;
        }
        break;
    case 4:
    
    cout<<"Do you have promocode?????";
    cin>>answer;
    if (answer=='y'|| answer=='Y')
    {
        cout<<"Enter your promocode   :";
        cin>>promocode;
        if (promocode=="Prozzcherm")
        {
            cout<<"You get discount 10%";
            discount = 10;
            total = 1.5*quantilty;
            payment = total - discount/100*total;
        }
        else{
            cout<< "Do you want to enter again ?";
            cin>>answer;
            if(answer == 'y') goto again;
        }
    }
    break;

        
    default:
        cout<<"Mer bos ke phg "<<endl;

        break;
    }
    cout<<"Total Payment:"<<payment<<"$";
}