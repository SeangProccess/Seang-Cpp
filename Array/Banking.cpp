#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int opt,count=0,find = 0;//assign find = 0;
    string name[20],password[20],deposit[20],search;
    float balance[20],money;
    
do
{
    cout<<"Banking    "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"1.Register "<<endl;
    cout<<"2.Deposit  "<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"4.View Account"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"Enter Option    :";
    cin>>opt;
 
   switch (opt)
    {
    case 1:
        cout<<"Enter Username   :";
        cin>>name[count];
        cout<<"Enter Password   :";
        cin>> password[count];
        cout<<"Money Banlance  :";
        cin>>balance[count];
        cout<<"Your Balance   :"<<balance[count]<<endl;
        count++;
    break;
    case 2:
        cout<<"Enter Your Password to deposite   :";
        cin>>search;
        // 1 2 3
        for (int i = 0; i < count; i++)
        {
            if (search == password[i])//2
            {
                find =1;
                cout<<"Enter Your Money to deposit  :";
                cin>>money;
                cout<<"Luy You Dak hz hz "<<endl;
                balance[i] = balance[i] + money;
                cout<< "You deposit money : $"<<money<<" Succefull"<<endl;
                cout<<"Your Balance :"<<balance[i]<<endl;

            }
        }
        cout<< "find value : "<<find<<endl;
        if (find == 0)
        {
                cout<<"You Ot mean account teh bro"<<endl;
        }    
           
    break;
    case 3:
        cout<<"Enter Your Password to withdraw   :";
        cin>>search;
        for (int i = 0; i < count; i++)
        {
            if (search == password[i])
            {
                cout<<"Enter money to withdraw  :";
                cin>>money;
                if (money <= balance[i])
                {
                balance[i]= balance[i]-money;
                cout<<"You withdraw successful"<<endl;
                cout<<"Your Balance  : $"<<balance[i]<<endl;
                }
                
                if (money > balance[i])
                {
                    cout<<"Your Balance Is Not Enough"<<endl;
                }
            }
            else{
                cout<<"This Password not has Account"<<endl;
            }
            
                
            
        }
        
    break;
    case 4:
        cout<<left;
        cout<<setw(10)<<"Name"
            <<setw(10)<<"Password"
            <<setw(10)<<"Balance"<<endl;

        cout<<setw(10)<<
        
        
        
        break;
        

    default:
        cout<<"No Option"<<endl;
        break;
    }
} 
while (opt != 5);//4 != 4 false
                //3 != 4 true
                //2 != 4 true
                //1!= 4 true
return 0; 
}
    






  