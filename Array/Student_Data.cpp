#include <iostream>
using namespace std;
int main(){
    int count;
    string name [5];
    int age[5];
    char sex[5];
    float total [5], english[5], math[5],khmer[5];
    char opt;
    do
    {
        
        cout<<"P'jol mk tha oy ke tver man dong ::::";
        cin>>count;
        for (int i=1; i<=count; i++)
        {
        cout<<"Student "<<i+1<<endl;
        cout<<"\tEnter Your Name    :";
        cin>>name[i];
        cout<<"\tEnter Your Age     :";
        cin>>age[i];
        cout<<"\tEnter Your Sex    :";
        cin>>sex[i];
        cout<<"\tEnter Your English Score  :";
        cin>>english[i];
        cout<<"\tEnter Your Math Score     :";
        cin>>math[i];
        cout<<"\tEnter Your Khmer Score    :";
        cin>>khmer[i];
        }
        for (int i=1; i<=count; i++)
        {
            total[i] = math[i] + khmer[i] +english[i];
            cout<<"Your Total Score of student :"<<total[i]<<endl;
            
        }
        
        cout<< "Do you want to register again !![y/n] : ";
        cin>>opt;
    
    } while (opt == 'y');
    
}