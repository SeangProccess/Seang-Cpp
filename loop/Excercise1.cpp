#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float sum=0;
    int number;
    int count;
    float average;

    cout<<"sum of number input"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Oy ke tver man dong ng min dak mk             :";
    cin>>count;
    cout<<"------------------------"<<endl;

    for (int i = 1; i <=count; i++)
    {
        cout<<"Min pjol mk cherm men                     :";
        cin>>number;
        sum = sum + number;
    }
    cout<<"Mer latphorl klun eng tv yii                  :"<<sum<<endl;
    average = sum /count;
    cout<<"Ot jes tver klun eng teh men lv smer pin ng   :"<<setprecision(2)<<average;


}