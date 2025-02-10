#include <iostream>
using namespace std;
//note : row loop 1 time col loop n time

int main(){
    for(int i = 1; i<=4; i++){//row
        for(int j = i; j <= 4; j++){//col
            cout<< "*";
        }
        cout<< endl;
    }
}
//note: 
    //i = 1; i<=4; true;
            //j= i = 1; true; 
            //j= 2; j<=4 ; true ; 
            //j= 3; j<=4; true , 
            //j= 4; j<=4; true; 
        //result = ****
    //i = 2; i<=4; true;
            //j= i =2; j<=4; true;
            //j= 3; j<=4; true;
            //j= 4; j<=4; true;
        //result = ***
    //i = 3; i<=4; true;
            //j= i = 3; true;
            //j= 4 ; true;
        //result = **
    //i =4; i<=4; true;
            //j= i = 4; true;
        //result = *
    //i = 5; i<=4; false; no execute;
