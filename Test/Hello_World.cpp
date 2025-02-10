#include <iostream>
using namespace std;
int main(){
    int code, qty;
    string name;
    float price, discount, total, save, payment;

    cout<<"Please Enter Your Product Data  :"<<endl;
    cout<<"========================================="<<endl<<endl;

    cout<<"Enter Code          :";
    cin>>code;
    cout<<"Enter name          :";
    cin>>name;
    cout<<"Enter Price         : ";
    cin>>price;
    cout<<"Enter qty           :";
    cin>>qty;


    total = price * qty;

if (total>50)
{
    discount = 50;
}
else if(total>=40){
    discount = 40;
}
else if(total>=30){//if(total < 40 && total >= 30)
    discount = 30;
}
else if(total>=20){
    discount = 20;

}
else if(total<20){
    discount = 0;
}
    save = total *discount/100;
    payment = total - save;


    cout<<"OUtput Data Of Product >>>"<<endl<<endl;
    cout<<"Product Code        :"<<code<<endl;
    cout<<"Product Name        :"<<name<<endl;
    cout<<"Product Price       :"<<price<<"$"<<endl;
    cout<<"Product Qty         :"<<qty<<endl;
    cout<<"Total               :"<<total<<"$"<<endl;
    cout<<"Product Discount    :"<<"%"<<discount<<endl;
    cout<<"Save Money          :"<<save<<"$"<<endl;
    cout<<"Payment             :"<<payment<<"$"<<endl;
    cout<<"###########################################"<<endl;
    return 0;
}