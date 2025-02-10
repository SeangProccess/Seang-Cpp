#include <iostream>
#include <iomanip>

using namespace std;

int main(){
     int id[10], count=0,search;
     int opt;
    string name[10];
    int find = 0;
    do
    {
        cout<< "1.insert\n2.view\n3.search\n4.update\n5.delete\n6.exit"<<endl;
         cout<<"---------------------------------"<<endl;
        cout<< "enter option[1-6]: ";cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<"\tEnter Staff ID         :";
            cin>>id[count];
            cout<<"\tEnter Staff Name       :";
            cin>>name[count];
            count++;
            break;
        case 2:
            cout<<left;
            cout<<setw(8)<<"id"
                <<setw(20)<<"Name"<<endl;
            cout<<"---------------------------------"<<endl;
            for(int i = 0; i<count; i++){//i<count ព្រោះ count++​ បើវាចូលទៅក្នុង case 1​វាកើនម្ដង 1 (count++)
                                        // count​​ នៅក្នុង​ជួរឈរនឹងជួរដេកទី 1​ ហើយនៅក្នុងជួរឈរទី1 [នៅក្នុង​ជួរដែលបាននិយាយនឹងគឺវាមានពីរធាតុ id and name 
                                        //ព្រោះយើងបញ្ចូលនឹងបញ្ចេញទិន្នន័យវិញតែ 2​ធាតុនឹង]
                                        //i jab pi 0 tv vea tver knong knong loop hz vea kern 1 rhot because (i++)
                cout<<setw(8)<<id[i]
                <<setw(20)<<name[i]<<endl;
            }
            break;
        case 3:
            find = 0;// Find ស្មើ 0​ ប្រសិនបើវាចូលទៅពិនិត្យលក្ខខណ្ឌក្នុង loop អត់ឃើញទិន្នន័យឬខុសទិន្នន័យ
            cout<<"enter id to search : ";
            cin>>search;
            for(int i= 0; i<count; i++){//mun ng vea search vea tver knong loop sin 
                if(id[i] == search){//vea tk id tv preab teap tha mean data ot ber mean vea cout mk hz
                    cout<< "search data : "<<endl;
                    cout<<setw(8)<<id[i]
                        <<setw(20)<<name[i]<<endl;
                      find = 1;//ប៉ុន្តែប្រសិនបើវាចូលមកពិនិត្យក្នុង loop ឃើញមានទិន្នន័យឬទិន្នន័យត្រូវនឹងអ្វីដែលគេបញ្ចូលគឺ Find = 1 វិញ
                }
             
            }
            if(find == 0){//ប្រសិនបើ Find ពីរខាងលើចូលស្មើ 0​ឬ ស្មើ​ 1​ វានឹងយកមកប្រៀបធៀបគ្នា    ប្រសិនបើវាពិនិត្យឃើញទៅពិតគឺវាធ្វើ cout​​ ខាងក្រោម ប៉ុន្តែប្រសិនបើវាពិនិត្យមើលទៅមិនពិតវានឹងទៅធ្វើក្នុង​ Loop ខាងលើវិញហើយ
                            // ប្រសិនបើ Loop ខាងលើចូល find = 0 វានឹងយកមកប្រៀបធៀបជាមួយ if ខាងក្រោមនឹងហើយ​ Example 0 = 0 true but 1=0 falesh so it will back to loop in case 3; 
                cout<< "Data not found !!"<<endl;//ah nis ber ot mean knong id 
            }
            break;
        case 4:
            find == 0;
            cout<<"enter id to update : ";
            cin>>search;
            for(int i= 0; i<count; i++){
                if(id[i] == search)
                {
                    cout<< "New Data : "<<endl;
                    cout<< "enter new id : ";
                    cin>>id[i];
                    cout<< "enter new name : ";
                    cin>>name[i];
                    find =1;
                }
        
            }
            if(find == 0){
                cout<< "Data not found !!"<<endl;
            }
            break;
        default:
            cout<< "No option please chose[1-6]!!!"<<endl;
            break;
        }
    } while (opt != 6);//6 != 6
    
}