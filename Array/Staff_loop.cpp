#include <iostream>
#include <iomanip> //for set space  || for example: Id        Name                  salary          tax
                                    //              1           Seang                   500         0.5
    //we use it for do like example
    //And we use for loop
    //   cout<<left;
    // cout<<setw(8)<<"id"
    //     <<setw(20)<<"Name"
    //     <<setw(10)<<"Salary"
    //     <<setw(10)<<"Tax"<<endl;

    //And this one we use for loop too 
    //cout<<left;
    // cout<<setw(8)<<id[i]
    //     <<setw(20)<<name[i]
    //     <<setw(10)<<salary[i]
    //     <<setw(10)<<tax[i]<<endl;
using namespace std;
int main(){
    int id[10], count;
    string name[10];
    float salary[10],tax[10],total[100];
    

    cout<<"Staff Information"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Enter Number of stuff     :";
    cin>>count;
    for (int i =0; i < count; i++)
    {
        cout<< "Staff "<<i+1<<":"<<endl;
        cout<<"\tEnter Staff ID         :";
        cin>>id[i];
        cout<<"\tEnter Staff Name       :";
        cin>>name[i];
        cout<<"\tEnter Staff Salary     :";
        cin>>salary[i];
        if (salary[i]>=300)
        {
            tax[i] = 0.5; 

        }
        else{
            tax[i]=0.2;
        }
        
    }
    cout<<"View Staff list"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<left;
    cout<<setw(8)<<"id"
        <<setw(20)<<"Name"
        <<setw(10)<<"Salary"
        <<setw(10)<<"Tax"<<endl;
    for (int i=0 ; i < count; i++)
    {
    total[i]= salary[i]-tax[i];
    cout<<left;
    cout<<setw(8)<<id[i]
        <<setw(20)<<name[i]
        <<setw(10)<<salary[i]
        <<setw(10)<<tax[i]<<endl;

    }

  
    

    
}