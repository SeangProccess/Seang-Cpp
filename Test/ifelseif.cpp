#include<iostream>

using namespace std;

int main(){
   int num;

   cout<<"Enter num : ";
   cin>>num;

   if(num > 10){
        cout<< "num > 10"<<endl;
   }
   else if(num > 8){//if(num <= 10 && num>8)
        cout<< "num 8 - 10"<<endl;
   }
   else if(num > 5){
        cout<< "num 5 - 8"<<endl;
   }
   else{
        cout<< "num <= 5"<<endl;

   }

        // if(num>10){
        //     cout<< "num > 10"<<endl;
        // }
        // if(num <=10 && num>8){
        //     cout<< "num 8 - 10"<<endl;
        // }
        // if(num<=8 && num > 5){
        //         cout<< "num 5 - 8"<<endl;
        // }
        // if(num<=5){
        //      cout<< "num <= 5"<<endl;

        // }

}