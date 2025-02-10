// #include<iostream>
// using namespace std;
// int main(){
//     string name;
//     int ID;
//     float point;
//     string result;

//     cout<<"--------------------------------------"<<endl;
//     cout<<"Enter Name       :";
//     cin>>name;

//     cout<<"Enter ID         :";
//     cin>>ID;

//     cout<<"Enter gpa        :";
//     cin>>point;
    
//     if(point >= 50){
//         result = "Pass";
//     }
//     else{
//         result = "False";
//     }
//     cout<<"--------------------------------------"<<endl;
//     cout<<"Name       :"<<name<<endl;
//     cout<<"ID         :"<<ID<<endl;
//     cout<<"gpa        :"<<point<<endl;
//     cout<< "Result    : "<<result;
  
    
// }
#include <iostream>
using namespace std;
int main(){
    int a;
    string result;
    cout<<"Enter number:";
    cin>>a;

    if(a<0){
        result = "Negative";
    }
    if(a==0){
        result = "Lek 0 bro";
    }
    if(a>0){
        result = "Positive";
    }
    cout<<result;
}