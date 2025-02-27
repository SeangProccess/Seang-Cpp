#include <iostream>
using namespace std;

//syntax : datatype functionName(parament1,parament2,....){

//}

int sum(int num, int num1){
    int s =  num + num1;
    return s;
}
double sum(double num, double num1){
    double s =  num + num1;
    return s;
}

int main(){
   cout<<sum(1.5,1.5);
}