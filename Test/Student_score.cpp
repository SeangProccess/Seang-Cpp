#include <iostream>
using namespace std;
int main(){
    float score;
    char great;

    cout<<"Enter Score :"<<endl;
    cin>>score;

if (score>=95)
{
    great = 'A';

}
else if(score>=85){
    great = 'B';
}
else if(score>=75){
    great = 'C';
}
else if(score>=60){
    great = 'D';
}
else if(score>=50){
    great = 'E';
}
else if(score<50){
    great = 'F';
}
    cout<<great;
}