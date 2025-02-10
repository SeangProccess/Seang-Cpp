#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int qty[10],count,code[15];
    string name[20];
    float price[20],discount[10], total[20], payment[10];


    cout<<"Enter Your Product Data Brooooo     "<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Enter number of product     :";
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        cout<<"Product "<<i+1<<endl;
        cout<<"Enter code   :";
        cin>>code[i];
        cout<<"Enter Name   :";
        cin>>name[i];
        cout<<"Enter qty    :";
        cin>>qty[i];
        cout<<"Enter price  :";
        cin>>price[i];

        if (qty[i]>=50)
        {
            discount[i]= 10;
        }
        else{
            discount[i]=0;
           
        }
         total[i]= qty[i]*price[i];
        payment[i]= total[i]- (discount[i]/100)*total[i];//0 * 1000
    }
  cout<<"View Product List"<<endl;
  cout<<"-----------------------"<<endl;
  cout<<left;
  cout<<setw(10)
        <<setw(20)<<"code"
        <<setw(20)<<"Name"
        <<setw(10)<<"qty"
        <<setw(10)<<"price"
        <<setw(10)<<"total"
        <<setw(10)<<"Dis"
        <<setw(20)<<"Payment"<<endl;
    for (int i = 0; i < count; i++)
    {
        
        cout<<left;
        cout<<setw(10)
        <<setw(20)<<code[i]
        <<setw(20)<<name[i]
        <<setw(10)<<qty[i]
        <<setw(10)<<price[i]
        <<setw(10)<<total[i]
        <<setw(10)<<discount[i]
        <<setw(20)<<payment[i]<<endl;
    }
    


    

    



    return 0;
}
