#include <iostream>

using namespace std;

int main(){
    char opt;
    cout<<  "1. red\t2. black"<<endl;
    cout<< "Enter option : ";
    cin>>opt;

    switch (opt)
    {
    case 'a':
        cout<< "You are enter option 1";

        


        break;
    case 2:
        cout<< "You are enter option 2";
        break;
    case 3:
        cout<< "You are enter option 3";
        break;
    case 4:
        cout<< "You are enter option 4";
        break;
    
    default:
        cout<< "No option !! kom jes ta dak"<<endl;
        break;
    }
}