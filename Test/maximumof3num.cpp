#include <iostream>
using namespace std;
int main(){
    int a, b ,c , maximum, minimum , result;

    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    cout<<"Enter C:";
    cin>>c;

if (a > b)
{
  
    maximum = a;
    if(maximum > c){
        result = maximum;
    }
    else{
        result = c;
    }
}
else{
    maximum = b;
    if (maximum > c)
    {
        result = maximum;
    }
    else{
        result = c;
    }
    
}
    cout<<result;



}