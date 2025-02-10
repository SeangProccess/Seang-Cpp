#include <iostream>
using namespace std;
int main(){
    //int id;//store 1 item
    int id[10];
    int count;
    
    // cout<<id[0];
    // cout<<id[1];
    // cout<<id[2];
    cout<< "enter number of data : ";
    cin>>count;
    for(int i = 0; i<count; i++){
        cout<< "enter value of num -"<<i+1<<": ";
        cin>>id[i];
       
   }
   for(int i = 0; i<count; i++){
     cout<<id[i]<<endl;
   }
}