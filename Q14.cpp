// calculator 
#include<iostream>
using namespace std;
int main(){
    int choice,no1,no2;
    cout<<"                CALCULATOR         " ;
    cout<<"\nEnter no1 and no2 : ";
    cin>>no1>>no2;
    cout<<"\nChoose operator ";
    cout<<"   1. Add \n                   2. Subtract\n                   3. Multiply\n                   4. Divide";
    cout<<"\nEnter your Choice : ";
    cin>>choice;
    switch(choice){
        case 1: cout<<"Answer is : "<<no1+no2;
        break;
        case 2: cout<<"Answer is : "<<no1-no2;
        break;
        case 3: cout<<"Answer is : "<<no1*no2;
        break;
        case 4: cout<<"Answer is : "<<no1/no2;
        break;
        default : 
        cout<<"Invalid Choice";
    }
    return 0;
}