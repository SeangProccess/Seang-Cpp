#include <iostream>
using namespace std;
int main(){
    int age,opt;
    string name,ans;
    

    cout<<"****************************************************************"<<endl<<endl;
    cout<<"Jes tea p'jol tv kom ot p'yoch pek"<<endl;
    cout<<"------_____------"<<endl;
    cout<<"Mix min p'jol name tv   :";
    cin>>name;
    cout<<"Pel p'jol name hz p'jol age m'dong tv   :";
    cin>>age;
    cout<<"Hz mk rk ey ke ng "<<endl;
    cout<<"1.Mk rk ss "<<endl;
    cout<<"2.Mk rk pp"<<endl;
    cout<<"3.Mk rk by c"<<endl;
    cout<<"4.Mk rk luy jay"<<endl;
    cout<<"5.Mk rk b mk b jam"<<endl;
    cout<<"P'jol muy mk ber ot p'jol bit vinh tv mk rk ngob ey     :";
    cin>>opt;


    switch (opt)
    {
    case 1:
        cout<<"Ber min rk klun eng pg mk rk nv nis mix ban bek tnam men??"<<endl;
        break;
    case 2:
        cout<<"--------------->Mer name Klun eng tv minh dak ey lv jenh ng hz        :"<<name<<endl;
        cout<<"--------------->Hz mer age klun eng dea tv kmean ey os ja teh         :"<<age <<endl;
        cout<<"Mk rk pp ng mean luy ot?? "<<endl;
        cout<<"P'jol peak tha : Mean or Ot"<<endl;
        cout<<"Ber khos pi ng kom songkherm tha mean answer oy (fuck you)  :";
        cin>>ans;
        if (ans == "Mean")
        {
            cout<<"Ber mean tuk jay tv kom yk pp p'yat ot ban der lg "<<endl;
        }
        if (ans == "Ot")
        {
            cout<<"Ber Ot teh rk luy jay klun eng tv kom khorm pek ah cherm"<<endl;
        }
        
        break;
    case 3:
     cout<<"--------------->Mer name Klun eng tv minh dak ey lv jenh ng hz        :"<<name<<endl;
     cout<<"--------------->Hz mer age klun eng dea tv kmean ey os ja teh         :"<<age <<endl;
     cout<<"Ber min dam by pg ban ey c yiiiiii ot jes dam by"<<endl;
        break;
    case 4:
       cout<<"--------------->Mer name Klun eng tv minh dak ey lv jenh ng hz        :"<<name<<endl;
        cout<<"--------------->Hz mer age klun eng dea tv kmean ey os ja teh         :"<<age <<endl;
        cout<<"Nis yk 100 riel jay lg tv min bach oy vinh teh "<<endl;
        cout<<"Ster hah ot mean luy jay "<<endl;
        break;
    case 5:

        cout<<"Come here baby I love you and I will bork u yk luy jay because me kr ot mean luy jay dea ber ot luy kom mk rk me ey na baby"<<endl; 
        cout<<"Nak Na Del Mean Name Seang Mnak Ng dg tea Smos hz sl kort tv ot khos teh "<<endl;
        cout<<"But Ber Na ke name:: (Hong Sal Reach)kort 3 nak ng Sava klang hah ber khernh name kort 3 ng kom sl ot laor teh jer nh tv "<<endl;
        cout<<"Hz mnus prozz ot mean na ke smos 1 teh mean tea mnak name Seang ng teh ban smos (yy tv mnak ng smos kr jes sava kr jes )"<<endl;
        
        break;
    default:
        cout<<"Merl Mer ke mean lek man klas hz jes tea p'jol ng ot mean eyes mer teh men yiiiii (Fuck you bro cherm)"<<endl;
        break;
    }
 
    return 0;

}