 #include <iostream>
using namespace std;
int main(){
    int number1, number2, maximum, minimum;
    char opt;
    cout<<"Find Minimum And Maximum "<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Enter value of number1   :::";
    cin>>number1;
    cout<<"Enter value of number2   :::";
    cin>>number2;

    cout<<"-------------------------"<<endl;
    cout<<"a.Minimum\t\tb.Maximum"<<endl;
    cout<<"Enter Your Choice [a,b]"<<endl;
    cin>>opt;

    switch (opt)
    {
    case 'a':
        if(number1 == number2){
            cout<< "number 1 = number 2";
            break;
        }
        else if (number1<number2)
        {
            minimum = number1;     
        }
        else
        {
            minimum = number2;
        }
      
        
        cout<<"Minimum"<<minimum<<endl;
        break;
    case 'b':
        if (number2>number1)
        {
           
            maximum = number2;
        }
        if (number2<number1)
        {
         
            maximum = number1;
        }
        cout<<"Maximum :"<<maximum<<endl;
        break;
        
    default:
        cout<<"No Option!!!!!!";
        break;
    }

    return 0;
}

