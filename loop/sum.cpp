#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int count;
    cout<< "Enter number of loop :";
    cin>>count;
    for(int i = 1; i<=count; i++){
        cout<< i<<"+";
        sum = sum + i*2;//sum += i;
    }
    cout<< "\b = "<<sum;
}
// i = 1; i<=5; true ; sum =  sum + i= 0 +1 =1
//i =2; i<=5; tr4ue ; sum = 1 + 2 = 3;
//i = 3; i<=5; true ; sum = 3 + 3 = 6;
//i = 4; i<=5 tru3; sum = 6 + 4 = 10;
//i = 5; i<=5; sum = 10 + 5 = 15
//i = 6; i<=5; false ; no execute