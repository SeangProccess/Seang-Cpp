#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int opt , count = 0,qty[10],code[10],search,sale[10],find=0;
    string name[10];
    float price[10],amount[10];
    int qtysale;
    int invId[10];
    int inv_proId[10],inv_proQty[10];
    string inv_proName[10];
    float inv_amount[10];
    int countInv = 0;
do
{
    cout<<"Minimart"<<endl;
    cout<<"-------------------"<<endl;
    cout<<"1.Insert"<<endl;
    cout<<"2.View"<<endl;
    cout<<"3.Sale"<<endl;
    cout<<"4.All invoice"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"Enter Option   :";
    cin>>opt;
    switch (opt)
    {
    case 1:
    cout<<"Enter Product Name  :";
    cin>>name[count];
    cout<<"Enter Product Code  :";
    cin>>code[count];
    cout<<"Enter Price         :";
    cin>>price[count];
    cout<<"Enter Qty           :";
    cin>>qty[count];
    count++;
        break;
    case 2:
    cout<<left;
    cout<<"----------------------------"<<endl;
    cout<<setw(30)<<"Product Name"
        <<setw(30)<<"Product Code"
        <<setw(20)<<"Price"
        <<setw(20)<<"Qty"<<endl;
    for (int i = 0; i < count; i++)
    {
    
    cout<<left;
    cout<<setw(30)<<name[i]
        <<setw(30)<<code[i]
        <<setw(20)<<price[i]
        <<setw(20)<<qty[i]<<endl;
    cout<<"----------------------------"<<endl;
    }

    break;
    case 3:
    cout<<"Sale Product"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Enter Product Code to Sale  :";
    cin>>search;
    for ( int i = 0; i < count; i++)
    {
        if (search == code[i])
        {
            cout<<"Enter qty  :";
            cin>>qtysale;
                if (qty[i]>=qtysale)
                {
                    qty[i] -= qtysale;//qty[i] = qty[i] - qtysale;
                    amount[i]= price[i]*qtysale;
                    cout<<"Invoice"<<endl<<endl;
                    cout<<"-------------------------"<<endl;
                    cout<<"Product Name   :"<<name[i]<<endl;
                    cout<<"Product Code   :"<<code[i]<<endl;
                    cout<<"Price          :"<<price[i]<<endl;
                    cout<<"Qty            :"<<qtysale<<endl;
                    cout<<"Amount         :"<<amount[i]<<endl;

                    invId[countInv] = countInv + 100;
                    inv_proId[countInv] = code[i];
                    inv_proName[countInv] = name[i];
                    inv_amount[countInv] = amount[i];
                    inv_proQty[countInv] = qtysale;
                    countInv++;
                    find = 1;
                }
                else{
                    cout<<"Your Item not enough"<<endl;
                }  
        }
    if (find == 0)
    {
        cout<<"Your Product Code is wrong"<<endl;
    }
    
    }
    break;
    case 4:
        for (int i = 0; i < countInv; i++)
        {
        
        cout<<left;
         cout <<setw(10)<<invId[i]
            <<setw(10)<<inv_proId[i]
            <<setw(30)<<inv_proName[i]
            <<setw(20)<<inv_proQty[i]
            <<setw(20)<<inv_amount[i]<<endl;
        cout<<"----------------------------"<<endl;
        }
        break;
    default:
    cout<<"No Option"<<endl;
        break;
    }
} while (opt != 5);
    
return 0;

}


//if(a > b) ? true : false;