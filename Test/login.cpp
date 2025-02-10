#include <iostream>
using namespace std;
int main(){
    string name, admin, password,admin120;

    cout<<"Enter Username   :";
    cin>>name;
    cout<<"Enter Password   :";
    cin>>password;

    if (name != admin)
    {
      name = "Username Incorrect";
    }
    else if (password != admin120)
    {
        password = "Password Incorrect";

    }
    else if (name != admin && password != admin120){
        name = "Username and Password Incorrect";
        password = "Username and Password Incorrect";
    }
    else if(password == admin120 && name == admin ){
        cout<<"Login Successfuly !!";
    }
    
}