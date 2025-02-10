#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int length , width, opt;
    float Area, R, B, H;
    cout<<"Area of shape app"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    cout<<"1.Rectangle\t2.Circle\t3.Traingle\t4.Exit"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    
    cout<<"Chose one option[1-4]   :";
    cin>>opt;
    switch (opt)
    {
    case 1 :
        cout<<"Enter Length   :";
        cin>>length;
        cout<<"Enter Width   :";
        cin>>width;
        Area = length * width;
        cout<<"Vea Jea Ractangle  :"<<Area;
        break;
    case 2 :
        cout<<"Enter Radius   :";
        cin>>R;
        Area = 3.14 * pow(R,2);
        cout<<setprecision(3);
        cout<<"Vea Jea Circle   :"<<Area;
        break;
    case 3 :
        cout<<"Enter Hight   :";
        cin>>H;
        cout<<"Enter Base   :";
        cin>>B;
        Area = (B*H)/2;
        cout<<"Vea Jea Tranigle   :"<<Area;
        break;
    default:
        cout<<"Ber Tha dak khos hz Jenh tv mer ke mean man option !!!!!";
        break;
    }
    return 0;
}