#include <iostream> 
#include <iomanip>
using namespace std;
int main(){
     int opt, count = 0,id[10],find=0 ,search,deleted;
     string name[10];
     float salary[10];
     
do
{
     

     cout<<"1.Insert Employees"<<endl;
     cout<<"2.View Employees "<<endl;
     cout<<"3.Search Employees"<<endl;
     cout<<"4.Update Employees"<<endl;
     cout<<"5.Deleted Employees"<<endl;
     cout<<"6.Exit"<<endl;
     cout<<"------------------------------------"<<endl;
     cout<<"Enter Your Option    :";
     cin>>opt;
     switch (opt)
     {
     case 1:
               cout<<"-----------------------------"<<endl;
               cout<<"Enter Emplyees Name   :";
               cin>>name[count];
               cout<<"Enter Employees ID    :";
               cin>>id[count];
               // cout<<"Enter Salary          :";
               // cin>>salary[count];
               count++;
      
          break;
     case 2:
          cout<<left;
          cout<<setw(15)<<"Name"
               <<setw(15)<<"ID"<<endl;
          for (int i = 0; i <count; i++)
          {
                    cout<<left;
                    cout<<setw(15)<<name[i]
                         <<setw(15)<<id[i]<<endl;
     
          }
          break;    
     case 3:
     cout<<"Enter ID Employees  :";
     cin>>search;       
     for (int i = 0; i <count; i++)
     {
          if (id[i] == search)
          {
                find = 1;
          cout<<left;
          cout<<setw(15)<<"Name"
               <<setw(15)<<"ID"<<endl;
          cout<<left;
          cout<<setw(15)<<name[i]
               <<setw(15)<<id[i]<<endl;
          }
     }
     if (find == 0 )
     {
          cout<<"Not found"<<endl;
     }   
     break; 
     case 4: 
          for (int i = 0; i < count; i++)
     {
        cout<<"Enter Your ID  :";
        cin>>search;
        if (search == id[i])
     {
          cout<<"Enter New Name :";
          cin>>name[i];
          cout<<"Enter New ID   :";
          cin>>id[i];
          find = 1;
     
     }
     if (find == 0)
     {
          cout<<"Hello Ot mean ey heh bro"<<endl;
     } 
        
     }
     break;
     case 5:

           cout<<"Enter ID for deleted";
           cin>>deleted;
           for (int i = 0; i < count; i++)
           {
             
           
           if (id[i]=search)
           {
             for (int a = i; a < count -1 ; a++)
             {
               name[a]=name[a+1];
               id[a] = id[a+1];
               
             }
             count--;
             cout<<"Student Deleted"<<endl;
             find =1;
           }
           
           }
          
          if (find == 0)
          {
               cout<<"Hello Bro Ot mean ey teh"<<endl;
          }
          
          break;
     case 6:
          cout<<"Exiting"<<endl;
          break;
     
     default:
          cout<<"Min jes merl teh tha mean ey klas"<<endl;
          break;
     }
} 
     while (opt != 6) ;
return 0;

}