#include<iostream>
using namespace std;
int main(){
    int month1 , month2 , payment , total;
    
    cout<<"Enter month1  :";
    cin>>month1;
    cout<<"Enter month2  :";
    cin>>month2;
  
    if(month1 > month2){
        cout<< "the value inccorect please check again !!"<<endl;
    }
    else{
          total = month2 - month1;
          if(total <= 50){
            payment = 350 * total; 
          }
          else if (total < 100)
          {
            payment = 50 * 350 + (total - 50 )*400;//90 * 400 --> 50* 350 + 40*400
          }
          
          else if(total <= 150){
            payment = 50 * 350 + 50 * 400 + (total - 100)*500;
        }
          else if(total <= 200){
            payment = 50 * 350 + 50 * 400 +50*500+(total - 150) *600;
        }
          else {
            payment = 50 * 350 + 50 * 400 +50*500+ 50 *600 +(total - 200)*700;
          }
    }
    
    cout<<"Merl Luy Mer  :"<<payment;
}